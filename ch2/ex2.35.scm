:;; Exercise 2.35.
;;;
;;; Redefine count-leaves from section 2.2.2 as an accumulation:

(define (count-leaves t)
  (accumulate + 0 (map (lambda (x)
                         (cond ((null? x) 0)
                               ((not (pair? x)) 1)
                               (else (count-leaves x))))
                       t)))

(count-leaves '((0 0) (0 0) (0 0)))
; => 6
