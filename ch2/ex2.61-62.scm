;;; Ordered-list set representation

;;; Auxiliary functions {{{
(define (element-of-set? x set)
  (cond ((null? set) false)
        ((= x (car set)) true)
        ((< x (car set)) false)
        (else (element-of-set? x (cdr set)))))
(define (intersection-set set1 set2)
  (if (or (null? set1) (null? set2))
      '()
      (let ((x1 (car set1)) (x2 (car set2)))
        (cond ((= x1 x2)
               (cons x1
                     (intersection-set (cdr set1)
                                       (cdr set2))))
              ((< x1 x2)
               (intersection-set (cdr set1) set2))
              ((< x2 x1)
               (intersection-set set1 (cdr set2)))))))
;;; }}}

;;; Exercise 2.61 {{{
;;;
;;; Implement adjoin-set.

;;;;

(define (adjoin-set x set)
  (cond ((null? set) (list x))
        ;; Once we've determined that x is less than or equal to the first item
        ;; in the set, we don't need to iterate anymore through the set to
        ;; obtain the result, halving the number of steps on average compared
        ;; to the unordered list representation.
        ((= x (car set)) set)
        ((< x (car set)) (cons x set))
        (else (cons (car set)
                    (adjoin-set x (cdr set))))))


;;; }}}

;;; Exercise 2.62 {{{
;;;
;;; Give a $\Theta(n)$ implementation of union-set for sets represented as
;;; ordered lists.

;;;;

(define (union-set set1 set2)
  (cond ((null? set1) set2)
        ((null? set2) set1)
        (else
          (let ((h1 (car set1))
                (h2 (car set2))
                (t1 (cdr set1))
                (t2 (cdr set2)))
            ;; Each branch removes the car of either set1 or set2 on each
            ;; iteration; the removed car is not processed again, so the entire
            ;; union-set operation is $\Theta(n)$.
            (cond ((= h1 h2)
                   (union-set (cdr set1) set2))
                  ((< h1 h2)
                   (cons h1 (union-set t1 set2)))
                  (else
                    (cons h2 (union-set set1 t2))))))))
