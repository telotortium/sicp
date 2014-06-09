;; Define a better version of make-rat that handles both positive and negative
;; arguments.

(define (gcd a b)
  (if (= b 0)
      a
      (gcd b (remainder a b))))

(define (make-rat n d)
  (define (sign x)
    (if (>= x 0) 1 -1))
  (let ((s (* (sign n) (sign d)))
        (na (abs n))
        (da (abs d)))
    (define g (gcd na da))
    (cons (* s (/ na g)) (/ da g))))

(make-rat -3 4)
(make-rat 36 -108)
