;; Describe the behavior of the following procedure
(define (a-plus-abs-b a b)
  ((if (> b 0) + -) a b))

;; Evaluation does not take place when the procedure is defined, but rather
;; only after it is called. When it is called, evaluation proceeds from left to
;; right and from inside out. Thus, the forms are evaluated in the following
;; order:
;;
;; * (> b 0)
;; * (if ... + -)
;; * ((if ...) a b)
;;
;; Note that `+` and `-` are references to functions, which can in general be
;; returned from a function.
