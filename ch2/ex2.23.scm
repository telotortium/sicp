;;;; Define for-each procedure (calls a procedure on each item in a list with
;;;; the current item as the only argument).

(define (for-each f xs)
  (unless (null? xs)
    (f (car xs))
    (for-each f (cdr xs))))
