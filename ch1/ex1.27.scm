;; Carmichael numbers -- fool the Fermat primality test

;;; Ancillary functions {{{
;; Perfect primality test
(define (smallest-divisor n)
  (find-divisor n 2))
(define (find-divisor n test-divisor)
  (cond ((> (square test-divisor) n) n)
        ((divides? test-divisor n) test-divisor)
        (else (find-divisor n (+ test-divisor 1)))))
(define (divides? a b)
  (= (remainder b a) 0))
(define (prime? n)
  (= n (smallest-divisor n)))

;; Probabalistic primality test
(define (expmod base exp m)
  (cond ((= exp 0) 1)
        ((even? exp)
         (remainder (square (expmod base (/ exp 2) m))
                    m))
        (else
          (remainder (* base (expmod base (- exp 1) m))
                     m))))
(define (fermat-test n)
  (define (try-it a)
    (= (expmod a n n) a))
  (try-it (+ 1 (random (- n 1)))))

(define (fast-prime? n times)
  (cond ((= times 0) true)
        ((fermat-test n) (fast-prime? n (- times 1)))
        (else false)))
;;;}}}

(define (carmichael? n)
  (define (iter a)
    (cond ((= a n) true)
          ((= a (expmod a n n))
           (iter (+ a 1)))
          (else false)))
  (define (try) (iter 0))
  (define fermat-res (try))
  (define prime-res (prime? n))
  (or (and (not fermat-res) prime-res)
      (and fermat-res (not prime-res))))

;; All of these return #t, indicating that they are composite numbers even
;; though the fool the Fermat primality test.
(carmichael? 561)
(carmichael? 1105)
(carmichael? 1729)
(carmichael? 2465)
(carmichael? 2821)
(carmichael? 6601)
