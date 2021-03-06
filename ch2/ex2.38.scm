(use sicp test)

;;; Exercise 2.38.
;;;
;;; The accumulate procedure is also known as fold-right, because it combines
;;; the first element of the sequence with the result of combining all the
;;; elements to the right. There is also a fold-left, which is similar to
;;; fold-right, except that it combines elements working in the opposite
;;; direction:

(define (fold-left op initial sequence)
  (define (iter result rest)
    (if (null? rest)
        result
        (iter (op result (car rest))
              (cdr rest))))
  (iter initial sequence))

;;; What are the values of

(test 3/2
      (fold-right / 1 (list 1 2 3)))
(test 1/6
      (fold-left / 1 (list 1 2 3)))
(test '(1 (2 (3 ())))
      (fold-right list nil (list 1 2 3)))
(test '(((() 1) 2) 3)
      (fold-left list nil (list 1 2 3)))

;; Give a property that op should satisfy to guarantee that fold-right and
;; fold-left will produce the same values for any sequence.

;;;;

;; op must be commutative - (= (op a b) (op b a)) should hold true for any
;; a and b
