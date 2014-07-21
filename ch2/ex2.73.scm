(use sicp test)

;;; Auxiliary functions {{{
(define (variable? x) (symbol? x))
(define (same-variable? v1 v2)
  (and (variable? v1) (variable? v2) (eq? v1 v2)))
(define (=number? exp num)
  (and (number? exp) (= exp num)))

;; Operation, type -> procedure dispatch table.
(define *op-table* (make-hash-table equal?))

(define (put op type proc)
  (hash-table-set! *op-table* (list op type) proc))

(define (get op type)
  (hash-table-ref *op-table* (list op type)))
;;; }}}

;;; Exercise 2.73
;;;
;;; Type-tagged differentiation

(define (deriv exp var)
  (cond ((number? exp) 0)
        ((variable? exp) (if (same-variable? exp var) 1 0))
        (else ((get 'deriv (operator exp)) (operands exp)
                                           var))))
(define (operator exp) (car exp))
(define (operands exp) (cdr exp))

;;; a. {{{
;;;
;;; Explain what was done above. Why can't we assimilate the predicates number?
;;; and same-variable? into the data-directed dispatch?

;; We dispatch to an implementation of differentiation based on the operator of
;; an expression, which indicates whether it's a sum, product, etc. Since
;; numbers and variables are not operators, we cannot dispatch into the table
;; based on them and must handle them specially.

;; }}}

;;; b. {{{
;;;
;;; Write the procedures for derivatives of sums and products, and the
;;; auxiliary code required to install them in the table used by the program
;;; above.

(define (install-deriv-package)
  ;; internal procedures
  (define (make-sum a1 a2) (list '+ a1 a2))
  (define (addend s) (car s))
  (define (augend s) (cadr s))

  (define (make-product m1 m2) (list '* m1 m2))
  (define (multiplier p) (car p))
  (define (multiplicand p) (cadr p))

  (define (deriv-sum exp var)
    (make-sum (deriv (addend exp) var)
              (deriv (augend exp) var)))

  (define (deriv-product exp var)
    (make-sum
      (make-product (multiplier exp)
                    (deriv (multiplicand  exp) var))
      (make-product (deriv (multiplier  exp) var)
                    (multiplicand exp))))

  ;; interface to the rest of the system
  (put 'deriv '+ deriv-sum)
  (put 'deriv '* deriv-product))
(install-deriv-package)

;; }}}

;;; c. {{{
;;;
;;; Choose any additional differentiation rule that you like, such as the
;;; one for exponents (exercise 2.56), and install it in this data-directed
;;; system.

(define (make-exponentiation base power)
  (list '** base power))
(define (base s) (car s))
(define (exponent s) (cadr s))

(define (deriv-exponentiation operands var)
  (make-product
    (make-product
      (exponent exp)
      (make-exponentiation
        (base exp)
        (- (exponent exp) 1)))
    (deriv (base exp) var)))
(put 'deriv '** deriv-exponentiation)

;; }}}

;;; d. {{{
;;;
;;; In this simple algebraic manipulator the type of an expression is the
;;; algebraic operator that binds it together. Suppose, however, we indexed the
;;; procedures in the opposite way, so that the dispatch line in deriv looked
;;; like
;;;
;;; ((get (operator exp) 'deriv) (operands exp) var)
;;;
;;; What corresponding changes to the derivative system are required?

;; It is only necessary to change the places where the GET or PUT procedures
;; are actually invoked. In my implementation above, since the only place these
;; procedures are invoked besides in the definition of DERIV is when
;; registering the operator-specific commands, the order of the arguments to
;; the PUT calls is the only thing to change.

;; }}}
