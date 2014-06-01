;; How does behavior differ when evaluating the below using applicative-order
;; and normal-order evaluation?
(define (p) (p))

(define (test x y)
  (if (= x 0)
      0
      y))

(test 0 (p))

;; With applicative order, a procedure is called after evaluating all its
;; arguments. Therefore, the last expression is evaluated as follows:
;;
;; * 0 => 0
;; * (p) => ; Calls itself recursively forever
;;
;; In normal form, all expressions are fully expanded and then reduced to
;; obtain a value:
;; * (test 0 (p))
;; * (if (= 0 0) 0 (p))
;; * 0
;;
;; Because the procedure `p` cannot be validly evaluated by substitution (due
;; to infinite recursion), normal- and applicative-order evaluation give
;; different results here.
