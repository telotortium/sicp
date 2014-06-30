;;; Sets as binary trees

;;; Auxiliary functions {{{
(define (entry tree) (car tree))
(define (left-branch tree) (cadr tree))
(define (right-branch tree) (caddr tree))
(define (make-tree entry left right)
  (list entry left right))
(define (element-of-set? x set)
  (cond ((null? set) false)
        ((= x (entry set)) true)
        ((< x (entry set))
         (element-of-set? x (left-branch set)))
        ((> x (entry set))
         (element-of-set? x (right-branch set)))))
(define (adjoin-set x set)
  (cond ((null? set) (make-tree x '() '()))
        ((= x (entry set)) set)
        ((< x (entry set))
         (make-tree (entry set)
                    (adjoin-set x (left-branch set))
                    (right-branch set)))
        ((> x (entry set))
         (make-tree (entry set)
                    (left-branch set)
                    (adjoin-set x (right-branch set))))))
;;; }}}

;;; Exercise 2.63 {{{
;;;
;;; Each of the following two procedures converts a binary tree to a list.

(define (tree->list-1 tree)
  (if (null? tree)
      '()
      (append (tree->list-1 (left-branch tree))
              (cons (entry tree)
                    (tree->list-1 (right-branch tree))))))
(define (tree->list-2 tree)
  (define (copy-to-list tree result-list)
    (if (null? tree)
        result-list
        (copy-to-list (left-branch tree)
                      (cons (entry tree)
                            (copy-to-list (right-branch tree)
                                          result-list)))))
  (copy-to-list tree '()))

;;; a. {{{
;;;
;;; Do the two procedures produce the same result for every tree? If not, how
;;; do the results differ? What lists do the two procedures produce for the
;;; trees in figure 2.16?

;; Yes, both procedures produce a list in the order left-subtree, entry,
;; right-subtree -- i.e., in-order.

;;; }}}

;;; b. {{{
;;;
;;; Do the two procedures have the same order of growth in the number of steps
;;; required to convert a balanced tree with n elements to a list? If not,
;;; which one grows more slowly?

;; tree->list-1 grows more slowly: since a non-destructive append is $O(n)$ in
;; its first argument, the cost of performing the appends on a tree of $n$
;; nodes grows as $\sum_{k=0}^{n-1} 2^k = \frac{1 - 2^k}{1 - 2} = 2^k
;; - 1 = O(2^n)$. Meanwhile, the cost ot append a node to the result list in
;; tree->list-2 is $O(1)$, so the cost of the entire conversion is $O(n)$.

;;; }}}

;;; }}}

;;; Exercise 2.64 {{{
;;;
;;; The following procedure list->tree converts an ordered list to a balanced
;;; binary tree. The helper procedure partial-tree takes as arguments an
;;; integer n and list of at least n elements and constructs a balanced tree
;;; containing the first n elements of the list. The result returned by
;;; partial-tree is a pair (formed with cons) whose car is the constructed tree
;;; and whose cdr is the list of elements not included in the tree.

(define (list->tree elements)
  (car (partial-tree elements (length elements))))

(define (partial-tree elts n)
  (if (= n 0)
      (cons '() elts)
      (let ((left-size (quotient (- n 1) 2)))
        (let ((left-result (partial-tree elts left-size)))
          (let ((left-tree (car left-result))
                (non-left-elts (cdr left-result))
                (right-size (- n (+ left-size 1))))
            (let ((this-entry (car non-left-elts))
                  (right-result (partial-tree (cdr non-left-elts)
                                              right-size)))
              (let ((right-tree (car right-result))
                    (remaining-elts (cdr right-result)))
                (cons (make-tree this-entry left-tree right-tree)
                      remaining-elts))))))))

;;; a. {{{
;;;
;;; Write a short paragraph explaining as clearly as you can how partial-tree
;;; works. Draw the tree produced by list->tree for the list (1 3 5 7 9 11).

;; Given a $n$-element list, the elements of the list can be converted into
;; a binary tree with the first $\lfloor (n - 1) / 2 \rfloor$ elements in the
;; left subtree, the next element as the entry in this node, and the rest of
;; the elements in the right subtree. This procedure first recursively creates
;; the left subtree from the current list, returning that tree and the rest of
;; the list. Then, the current entry this-entry is isolated, and the rest of
;; the list ((cdr non-left-elts)) is used to recursively form the right
;; subtree, from which is also returned the elements at positions greater than
;; n that were not placed in the subtree. The left and right subtrees and the
;; current element are used to construct the final binary tree.

;;; }}}

;;; b. {{{
;;;
;;; What is the order of growth in the number of steps required by list->tree
;;; to convert a list of n elements?

;; partial-tree is called once for each branch of the binary tree that is
;; formed, plus once for the root. At the bottom of each branch is a node,
;; implying that every non-root node has a parent and therefore a corresponding
;; branch. Thus, the order of growth of list->tree is $O(n)$ for a list of $n$
;; elements.

;;; }}}

;;; }}}

;;; Exercise 2.65 {{{
;;;
;;; Use the results of exercises 2.63 and  2.64 to give $\Theta(n)$
;;; implementations of union-set and intersection-set for sets implemented as
;;; (balanced) binary trees.

(define (union-set set1 set2)
  (list->tree
    (let proc ((set1 (tree->list-2 set1))
               (set2 (tree->list-2 set2)))
      (cond ((null? set1) set2)
            ((null? set2) set1)
            (else
              (let ((x1 (car set1))
                    (x2 (car set2)))
                ;; Each branch removes the car of either set1 or set2 on each
                ;; iteration; the removed car is not processed again, so the
                ;; entire proc operation is $\Theta(n)$.
                (cond ((= x1 x2)
                       (proc (cdr set1) set2))
                      ((< x1 x2)
                       (cons x1 (proc (cdr set1) set2)))
                      (else
                        (cons x2 (proc set1 (cdr set2)))))))))))

(define (intersection-set set1 set2)
  (list->tree
    (let proc ((set1 (tree->list-2 set1))
               (set2 (tree->list-2 set2)))
      (if (or (null? set1) (null? set2))
        '()
        (let ((x1 (car set1)) (x2 (car set2)))
         (cond ((= x1 x2)
                (cons x1
                      (proc (cdr set1) (cdr set2))))
               ((< x1 x2)
                (proc (cdr set1) set2))
               ((< x2 x1)
                (proc set1 (cdr set2)))))))))

;;; }}}
