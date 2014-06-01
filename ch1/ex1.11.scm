;; f(n) = n, n < 3
;; f(n) = f(n - 1) + 2 * f(n - 2) + 3 * f(n - 3), n >= 3

;; Recursive
(define (f n)
  (if (< n 3)
    n
    (+ (f (- n 1))
       (* 2 (f (- n 2)))
       (* 3 (f (- n 3))))))

;; Iterative
(define (f n)
  (define (f-res a b c)
    (+ a (* 2 b) (* 3 c)))
  (define (f-iter m a b c)
    (cond
      ((>= m n) (f-res a b c))
      (else (f-iter (+ m 1) (f-res a b c) a b))))
  (if (< n 3)
    n
    (f-iter 3 2 1 0)))
