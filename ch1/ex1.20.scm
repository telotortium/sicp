;; Number of remainder operations performed with applicative vs. normal order
;; evaluation in (gcd 206 40), and in general?

(define (gcd a b)
  (if (= b 0)
      a
      (gcd b (remainder a b))))

;; In the applicative-order evaluation, a remainder is taken for each iteration
;; of gcd,
;;
;; d(#rem) / d(#iter) = 1
;;
;; Since $#iter \prop log(a)$, the number of remainders taken is
;; $\Theta(log(a))$.

;; In the normal-order evaluation, each expansion of gcd produces a number of
;; calls to remainder that is a constant multiple of the calls to remainder in
;; the previous iteration.
;;
;;   d(#rem) / d(#iter) = k #rem
;;
;; Thus, $#rem \prop e^{#iter}$, and therefore $#rem = \Theta(a)$.
(gcd 206 40)
(if (= 40 0)
  206
  (gcd 40 (remainder 206 40)))
(if (= 40 0)
  206
  (if (= (remainder 206 40) 0)
    40
    (gcd (remainder 206 40)
         (remainder 40 (remainder 206 40)))))
(if (= 40 0)
  206
  (if (= (remainder 206 40) 0)
    40
    (gcd (remainder 206 40)
         (remainder 40 (remainder 206 40)))))
