;;; Last element of a pair.
(define (last-pair xs)
  (cond ((null? xs)
         '())
        ;; Works whether xs is a proper or improper list
        ((not (pair? (cdr xs)))
         xs)
        (else
          (last-pair (cdr xs)))))
(last-pair (list 23 72 149 34))
; => (34)
