;;; Exercise 2.28.
;;;
;;; Write a procedure fringe that takes as argument a tree (represented as
;;; a list) and returns a list whose elements are all the leaves of the tree
;;; arranged in left-to-right order.


(define (fringe xs)
  (define (list-start? x)
    (and (pair? x)
         (pair? (cdr x))))
  (letrec
    ;; Take fringe of tree if possible or just return a list containing only
    ;; the argument.
    ((fringe*
       (lambda (xs)
         (if (not (list-start? xs))
           (list xs)
           (iter xs '()))))
     ;; Compute fringe of car of current list and push in reverse order
     (iter
       (lambda (xs leaves)
         (if (null? xs)
           leaves
           ; Could be sped up to constant-time append by keeping a reference to
           ; the tail of leaves and destructively modifying the cdr.
           (iter (cdr xs) (append (fringe* (car xs)) leaves))))))
    (reverse (fringe* xs))))


(define x (list (list 1 2) (list 3 4)))

(fringe x)
(1 2 3 4)

(fringe (list x x))
(1 2 3 4 1 2 3 4)
