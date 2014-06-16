;;; Exercise 2.27.
;;;
;;; Modify your reverse procedure of exercise 2.18 to produce a deep-reverse
;;; procedure that takes a list as argument and returns as its value the list
;;; with its elements reversed and with all sublists deep-reversed as well.

;;;;

;;; Auxiliary functions {{{
(define (reverse xs)
  (define (iter xs rs)
    (if (null? xs)
      rs
      (iter (cdr xs) (cons (car xs) rs))))
  (iter xs '()))
;;; }}}

(define (deep-reverse xs)
  (define (reverseable? x)
    (and (pair? x)
         (pair? (cdr x))))
  (letrec
    ;; Reverse if beginning of a list, else just return the argument
    ((deep-reverse*
       (lambda (xs)
         (if (not (reverseable? xs))
           xs
           (iter xs '()))))
     ;; Pop an element from the original list and push onto the reverse list
     (iter
       (lambda (xs rs)
         (if (null? xs)
           rs
           (iter (cdr xs) (cons (deep-reverse* (car xs)) rs))))))
    (deep-reverse* xs)))

(define x (list (list 1 2) (list 3 4)))

x
; => ((1 2) (3 4))

(reverse x)
; => ((3 4) (1 2))

(deep-reverse x)
; => ((4 3) (2 1))
