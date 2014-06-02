;; Compute Fibonacci numbers in constant space and O(log n) time:
;;
;; Fib(n) given a = Fib(n - 1), b = Fib(n -2) can be modeled as
;; a transformation
;;
;; T_{pq} (a, b) =
;;     a <- bq + aq + ap
;;     b <- bp + aq
;;
;; with p = 0, q = 1. The square of the general T_{pq} transformation can be
;; reduced to an equivalent transformation in T_{p'q'}:
;;
;; T_{pq}^2 (a, b) =
;;     a <- b (q^2 + 2pq) + a (2q^2 + 2pq + p^2)
;;     b <- b (p^2 + q^2) + a (q^2 + 2pq)
;; = T_{p'q'} (a, b), p' = p^2 + q^2, q' = q^2 + 2pq
;;
;; Use this to reduce the size of count by half at each step.
(define (fib n)
  (fib-iter 1 0 0 1 n))
(define (fib-iter a b p q count)
  (cond ((= count 0) b)
        ((even? count)
         (fib-iter a
                   b
                   (+ (* p p)     ; compute p'
                      (* q q))
                   (+ (* q q)     ; compute q'
                      (* 2 p q))
                   (/ count 2)))
        (else (fib-iter (+ (* b q) (* a q) (* a p))
                        (+ (* b p) (* a q))
                        p
                        q
                        (- count 1)))))
