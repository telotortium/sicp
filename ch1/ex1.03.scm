(define (square x)
  (* x x))
(define (sum-of-squares x y)
  (+ (square x) (square y)))
;; Return sum of squares of two largest out of three arguments
(define (f a b c)
  (cond
    ((and (< a b) (< a c)) (sum-of-squares b c))
    ((and (< b a) (< b c)) (sum-of-squares a c))
    (else (sum-of-squares a b))))
(f 1 2 3)
(f 2 1 3)
(f 3 2 1)
(f 3 3 2)
(f 3 2 2)
(f 2 2 2)
