;; Evaluate the following procedures using the substitution model:

;;; Ancillary functions {{{
(define (inc x) (+ x 1))
(define (dec x) (- x 1))
;;; }}}


(define (new+ a b)
  (if (= a 0)
    b
    (inc (new+ (dec a) b))))

;; This procedure is fundamentally recursive because it defers the evaluation
;; of inc until new+ has reached its base case, resulting in a stack of
;; deferred operations:
;;
;; * (new+ 4 5)
;; * (inc (new+ 3 5))
;; * (inc (inc (new+ 2 5)))
;; * (inc (inc (inc (new+ 1 5))))
;; * (inc (inc (inc (inc (new+ 0 5)))))
;; * (inc (inc (inc (inc 5))))
;; * (inc (inc (inc 6)))
;; * (inc (inc 7))
;; * (inc 8)
;; * 9

(define (new+ a b)
  (if (= a 0)
      b
      (new+ (dec a) (inc b))))

;; This procedure is fundamentally iterative because new+ is in a tail-call
;; position. Because of this, each call to new+ can be replaced with its
;; result:
;;
;; * (new+ 4 5)
;; * (new+ 3 6)
;; * (new+ 2 7)
;; * (new+ 1 8)
;; * (new+ 0 9)
;; * 9
