;; Iterative
(define (cont-frac n d k)
  (define (iter i acc)
    (if (= i 0)
      acc
      (iter (- i 1)
            (/ (n i) (+ (d i) acc)))))
  (iter k 0.0))

;; Reading -- infinite list of [0, (/ (n 1) (d 1)), (/ (n 1) (+ (d 1) (/ (n 2)
;; (d 2)))), ...]
