;;; Exercise 2.22.
;;;
;;; {{{
;;;
;;; Louis Reasoner tries to rewrite the first square-list procedure of
;;; exercise 2.21 so that it evolves an iterative process:

(define (square-list items)
  (define (iter things answer)
    (if (null? things)
      answer
      (iter (cdr things)
            (cons (square (car things))
                  answer))))
  (iter items nil))

;;; Unfortunately, defining square-list this way produces the answer list in
;;; the reverse order of the one desired. Why?

;;;;

;;; Consing an item onto the head of a list means the original list is now the
;;; cdr of the first cons cell in the list. Since the list is built in the
;;; order of items, the result of square list is built from tail to head, with
;;; the first item in items being the last of the result and vice versa.

;;; }}}

;;; {{{
;;;
;;; Louis then tries to fix his bug by interchanging the arguments to cons:

(define (square-list items)
  (define (iter things answer)
    (if (null? things)
      answer
      (iter (cdr things)
            (cons answer
                  (square (car things))))))
  (iter items nil))

;;; This doesn't work either. Explain.

;;;;

;;; Consing a list and a non-list value produces an improper pair -- only
;;; a cons with a list as the cdr forms a list.

;;; }}}
