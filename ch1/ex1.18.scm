;; Iterative multiplication algorithm using +, double, and halve in O(log n)
;; steps.

(define (double n) (* n 2))
(define (halve n) (/ n 2))
(define (*-int a b)
  (define (iter c a b)
    (cond
      ((= b 0) 0)
      ((= b 1) (+ c a))
      ((even? b)
       (iter c (double a) (halve b)))
      (else
        (iter (+ c a) (double a) (halve (- b 1))))))
  (iter 0 a b))
