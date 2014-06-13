;;; Last element of a pair.
(define (last-pair xs)
  (cond ((null? xs)
         '())
        ((null? (cdr xs))
         (list (car xs)))
        (else
          (last-pair (cdr xs)))))
(last-pair (list 23 72 149 34))
; => (34)
