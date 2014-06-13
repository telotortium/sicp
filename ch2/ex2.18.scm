;;;; Reverse a list

(define (reverse xs)
  (define (iter xs rs)
    (if (null? xs)
      rs
      (iter (cdr xs) (cons (car xs) rs))))
  (iter xs '()))
(reverse '(1 2 3 4 5))
; => (5 4 3 2 1)
