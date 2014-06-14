;;;; Define two different versions of the square-list function.

;;; Auxiliary functions {{{
(define (square x) (* x x))
;;; }}}

(define (square-list items)
  (if (null? items)
      nil
      (cons (square (car items))
            (cdr items))))
(define (square-list items)
  (map square items))
