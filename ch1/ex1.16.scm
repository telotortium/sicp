;; Design a procedure that evolves an iterative exponentiation process that
;; uses successive squaring and uses a logarithmic number of steps, as does
;; fast-expt.

(define (expt-int b n)
  (define (expt-iter a b n)
    (cond
      ((= n 0) a)
      ((= n 1) (* a b))
      ((even? n)
       (expt-iter a
                  (* b b)
                  (/ n 2)))
      (else
        (expt-iter (* a b)
                   (* b b)
                   (/ (- n 1) 2)))))
  (expt-iter 1 b n))
