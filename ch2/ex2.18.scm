;;;; Reverse a list
(define (reverse list)
  (let iter ((xs list)
             (rs '()))
    (if (null? xs)
      rs
      (iter (cdr xs) (cons (car xs) rs)))))
(reverse '(1 2 3 4 5))
; => (5 4 3 2 1)
