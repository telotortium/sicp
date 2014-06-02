;; Recursive multiplication algorithm using +, double, and halve in O(log n)
;; steps.

(define (double n) (* n 2))
(define (halve n) (/ n 2))
(define (fast-* a b)
  (cond
    ((= b 0) 0)
    ((= b 1) a)
    ((even? b)
     (double (fast-* a (halve b))))
    (else
      (+ a
         (double (fast-* a (halve (- b 1))))))))
