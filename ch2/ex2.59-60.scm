;;; Unordered-list representation of sets

;;; Auxiliary functions {{{
(define (element-of-set? x set)
  (cond ((null? set) false)
        ((equal? x (car set)) true)
        (else (element-of-set? x (cdr set)))))
(define (adjoin-set x set)
  (if (element-of-set? x set)
      set
      (cons x set)))
(define (intersection-set set1 set2)
  (cond ((or (null? set1) (null? set2)) '())
        ((element-of-set? (car set1) set2)
         (cons (car set1)
               (intersection-set (cdr set1) set2)))
        (else (intersection-set (cdr set1) set2))))
;;; }}}

;;; Exercise 2.59 {{{
;;;
;;; Implement the union-set operation for the unordered-list representation of
;;; sets.

;;;;

(define (union-set set1 set2)
  (cond ((null? set1) set2)
        ((null? set2) set1)
        ((element-of-set? (car set1) set2)
         (union-set (cdr set1) set2))
        (else (cons (car set1)
                    (union-set (cdr set1) set2)))))

;;; }}}

;;; Exercise 2.60. {{{
;;;
;;; We specified that a set would be represented as a list with no duplicates.
;;; Now suppose we allow duplicates. For instance, the set {1,2,3} could be
;;; represented as the list (2 3 2 1 3 2 2). Design procedures element-of-set?,
;;; adjoin-set, union-set, and intersection-set that operate on this
;;; representation. How does the efficiency of each compare with the
;;; corresponding procedure for the non-duplicate representation? Are there
;;; applications for which you would use this representation in preference to
;;; the non-duplicate one?

;;;;

;; No modifications necessary.
(define (element-of-set? x set)
  (cond ((null? set) #f)
        ((equal? x (car set)) #t)
        (else (element-of-set? x (cdr set)))))

;; Faster than version without duplicates -- just cons new element onto the
;; list.
(define (adjoin-set x set)
  (cons x set))

;; Unchanged -- could be slower since it's still necessary to confirm whether
;; each element is in the set, but the sets are likely to be longer.
(define (intersection-set set1 set2)
  (cond ((or (null? set1) (null? set2)) '())
        ((element-of-set? (car set1) set2)
         (cons (car set1)
               (intersection-set (cdr set1) set2)))
        (else (intersection-set (cdr set1) set2))))

;; Faster -- just need to join set1 and set2.
(define (union-set set1 set2)
  (if (null? set1)
    set2
    (union-set (cdr set1)
               (cons (car set1) set2))))

;;; In general, the duplicate-element representation of a set is likely to be
;;; faster when the dominant operations are adjoining elements and taking the
;;; union of two sets. In applications where lookups and especially
;;; intersections happen only occasionally, this representation would be
;;; preferable. However, order- or hash-based representations are probably
;;; superior for almost all uses, since the point of building a set is
;;; generally to be able to look things up in it, and the asymptotic cost of
;;; union and intersections are $O(N_1 + N_2)$, which is at least as good as
;;; these representations.
