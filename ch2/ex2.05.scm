;; Exercise 2.5.  Show that we can represent pairs of nonnegative integers
;; using only numbers and arithmetic operations if we represent the pair a and
;; b as the integer that is the product $2^a 3^b$. Give the corresponding
;; definitions of the procedures cons, car, and cdr.

;;;;

;; Since 2 and 3 are relatively prime, we can divide out one of the factors of
;; 2 or 3 to get the car or cdr, respectively.
(define (cons! a b)
  (* (expt 2 a) (expt 3 b)))

(define (factors-of-k n k)
  (define (iter i x)
    (cond ((= x 0)
           (error "Argument to log must be > 0"))
          ((not (= 0 (remainder x k)))
           i)
          (else (iter (+ i 1) (/ x k)))))
  (iter 0 n))

(define (car! p)
  (factors-of-k p 2))
(define (cdr! p)
  (factors-of-k p 3))

(cons! 1 2)
; => 18
(car! 18)
; => 1
(cdr! 18)
; => 2
