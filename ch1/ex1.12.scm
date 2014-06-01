;; Pascal's triangle
(define (choose n k)
  (cond
    ((or (< n 0) (< k 0) (> k n))
     0)
    ((or (= k 0) (= k n))
     1)
    (else (+ (choose (- n 1) (- k 1))
             (choose (- n 1) k)))))
