(define (equal? a b)
  (cond ((not (and (pair? a) (pair? b)))
         (eq? a b))
        ((and (pair? a) (pair? b))
         (and (equal? (car a) (car b))
              (equal? (cdr a) (cdr b))))
        (else #f)))

(equal? '(this is a list) '(this is a list))
; => #t

(equal? '(this is a list) '(this (is a) list))
; => #f
