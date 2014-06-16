;;; Exercise 2.32.
;;;
;;; We can represent a set as a list of distinct elements, and we can represent
;;; the set of all subsets of the set as a list of lists. For example, if the
;;; set is (1 2 3), then the set of all subsets is (() (3) (2) (2 3) (1) (1 3)
;;; (1 2) (1 2 3)). Complete the following definition of a procedure that
;;; generates the set of subsets of a set and give a clear explanation of why
;;; it works:

(define (subsets s)
  (if (null? s)
      (list '())
      (let ((rest (subsets (cdr s))))
        (append rest (map (lambda (xs) (cons (car s) xs)) rest)))))

(subsets '(1 2 3))
; => (() (3) (2) (2 3) (1) (1 3) (1 2) (1 2 3)

;; The subsets of a list consist of the subsets of the list consisting of all
;; elements except the first (i.e., the rest of the original list), plus the
;; addition of the first element into each subset of the rest of the list.
;;
;; The subsets of the empty list consists of just the empty list, so we can
;; inductively build up the subsets of the original list by successively
;; computing subsets of the suffixes of the list until the suffix being
;; computed is the original list.
