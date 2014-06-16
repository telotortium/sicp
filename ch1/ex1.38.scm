(define (tan x k)
  (cont-frac (lambda (i) (if (= i 1)
                           x
                           (- (* x x))))
             (lambda (i) (- (* 2 i) 1))
             k))
