;;; Auxiliary functions {{{
(define (variable? x) (symbol? x))
(define (same-variable? v1 v2)
  (and (variable? v1) (variable? v2) (eq? v1 v2)))
(define (=number? exp num)
  (and (number? exp) (= exp num)))
(define (make-sum a1 a2)
  (cond ((=number? a1 0) a2)
        ((=number? a2 0) a1)
        ((and (number? a1) (number? a2)) (+ a1 a2))
        (else (list '+ a1 a2))))
(define (make-product m1 m2)
  (cond ((or (=number? m1 0) (=number? m2 0)) 0)
        ((=number? m1 1) m2)
        ((=number? m2 1) m1)
        ((and (number? m1) (number? m2)) (* m1 m2))
        (else (list '* m1 m2))))
(define (sum? x)
  (and (pair? x) (eq? (car x) '+)))
(define (addend s) (cadr s))
(define (augend s) (caddr s))
(define (product? x)
  (and (pair? x) (eq? (car x) '*)))
(define (multiplier p) (cadr p))
(define (multiplicand p) (caddr p))
(define (deriv exp var)
  (cond ((number? exp) 0)
        ((variable? exp)
         (if (same-variable? exp var) 1 0))
        ((sum? exp)
         (make-sum (deriv (addend exp) var)
                   (deriv (augend exp) var)))
        ((product? exp)
         (make-sum
           (make-product (multiplier exp)
                         (deriv (multiplicand exp) var))
           (make-product (deriv (multiplier exp) var)
                         (multiplicand exp))))
        (else
         (error "unknown expression type -- DERIV" exp))))
;;; }}}

;;; Exercise 2.56 {{{
;;;
;;; Implement derivatives of powers.

;;;;

;; Exponentiation procedures {{{
(define (make-exponentiation b e)
  (cond ((=number? b 1) 1)
        ((=number? e 0) 1)
        ((=number? e 1) b)
        ((and (number? b) (number? e)) (expt b e))
        (else (list '** b e))))
(define (base e) (cadr e))
(define (exponent e) (caddr e))
(define (exponentiation? e)
  (and (pair? e) (eq? (car e) '**)))
;; }}}

(define (deriv exp var)
  (cond ((number? exp) 0)
        ((variable? exp)
         (if (same-variable? exp var) 1 0))
        ((sum? exp)
         (make-sum (deriv (addend exp) var)
                   (deriv (augend exp) var)))
        ((product? exp)
         (make-sum
           (make-product (multiplier exp)
                         (deriv (multiplicand exp) var))
           (make-product (deriv (multiplier exp) var)
                         (multiplicand exp))))
        ((exponentiation? exp)
         (let ((b (base exp))
               (e (exponent exp)))
           (make-product
             (if (number? e)
               (make-product
                 (exponent exp)
                 (make-exponentiation (base exp)
                                      (make-sum (exponent exp) -1)))
               (error "Can't evaluate non-constant exponents"))
             (deriv (base exp) var))))
        (else
         (error "unknown expression type -- DERIV" exp))))

;;; }}}

;;; Exercise 2.57 {{{
;;;
;;; Modify representations of sums and powers to allow more than two terms.

;;;;

(define (make-sum a . as)
  (define (rec a as)
    (if (null? as)
      (list a)
      (let ((a1 a)
            (a2 (car as))
            (arest (cdr as)))
        (cond ((=number? a1 0)
               (rec a2 arest))
              ((=number? a2 0)
               (rec a1 arest))
              ((and (number? a1) (number? a2))
               (rec (+ a1 a2) arest))
              (else
                (cons a1 (rec a2 arest)))))))
  (let ((val (rec a as)))
   (if (and (pair? val) (pair? (cdr val)))
     (cons '+ val)
     (car val))))
(define (make-product m . ms)
  (define (rec m ms)
    (if (null? ms)
      (list m)
      (let ((m1 m)
            (m2 (car ms))
            (mrest (cdr ms)))
        (cond ((or (=number? m1 0) (=number? m2 0))
               (list 0))
              ((=number? m1 1)
               (rec m2 mrest))
              ((=number? m2 1)
               (rec m1 mrest))
              ((and (number? m1) (number? m2))
               (rec (* m1 m2) mrest))
              (else
                (let ((val (rec m2 mrest)))
                 (if (=number? (car val) 0)
                   (list 0)
                   (cons m1 val))))))))
  (let ((val (rec m ms)))
   (if (and (pair? val) (pair? (cdr val)))
     (cons '* val)
     (car val))))
(define (addend s) (cadr s))
(define (augend s)
  (if (null? (cdddr s))
    (caddr s)
    (cons '+ (cddr s))))
(define (multiplier p) (cadr p))
(define (multiplicand s)
  (if (null? (cdddr s))
    (caddr s)
    (cons '* (cddr s))))

(test 0
      (make-sum 0 0 0 0 0 0))
(test 'x
      (make-sum (make-sum 'x)))
(test '(+ x 3)
      (make-sum 'x 3))
(test '(+ (+ x 3) (+ y 2))
      (make-sum (make-sum 'x 3)
                (make-sum 'y 2)))
(test 0
      (make-product 'x 'y 'z 0))
(test 1
      (make-product 1 1 1 1 1 1))
(test 'x
      (make-product (make-product 'x)))
(test '(* x 3)
      (make-product 'x 3))
(test '(* (* x 3) (* y 2))
      (make-product (make-product 'x 3)
                (make-product 'y 2)))
;;; }}}

;;; Exercise 2.58 {{{
;;;
;;; {{{
;;;
;;; Suppose we want to modify the differentiation program so that it works with
;;; ordinary mathematical notation, in which + and * are infix rather than
;;; prefix operators. Since the differentiation program is defined in terms of
;;; abstract data, we can modify it to work with different representations of
;;; expressions solely by changing the predicates, selectors, and constructors
;;; that define the representation of the algebraic expressions on which the
;;; differentiator is to operate.
;;;
;;; }}}

;;; a. {{{
;;;
;;; Show how to do this in order to differentiate algebraic expressions
;;; presented in infix form, such as (x + (3 * (x + (y + 2)))). To simplify the
;;; task, assume that + and * always take two arguments and that expressions
;;; are fully parenthesized.

(define (sum? x)
  (and (pair? x) (pair? (cdr x)) (eq? (cadr x) '+)))
(define (product? x)
  (and (pair? x) (pair? (cdr x)) (eq? (cadr x) '*)))
(define (addend s) (car s))
(define (augend s) (caddr s))
(define (multiplier p) (car p))
(define (multiplicand p) (caddr p))

(define (make-sum a1 a2)
  (cond ((=number? a1 0)
         a2)
        ((=number? a2 0)
         a1)
        ((and (number? a1) (number? a2))
         (+ a1 a2))
        (else
          (list a1 '+ a2))))
(define (make-product m1 m2)
  (cond ((or (=number? m1 0) (=number? m2 0))
         0)
        ((=number? m1 1)
         m2)
        ((=number? m2 1)
         m1)
        ((and (number? m1) (number? m2))
         (* m1 m2))
        (else
          (list m1 '* m2))))

(define expr (make-sum 'x (make-product 3 (make-sum 'x (make-sum 'y 2)))))

(deriv expr 'x)
; => 4

(deriv expr 'y)
; => 3

(deriv expr 'z)
; => 0

;;; }}}

;;; b. {{{
;;;
;;; The problem becomes substantially harder if we allow standard algebraic
;;; notation, such as (x + 3 * (x + y + 2)), which drops unnecessary
;;; parentheses and assumes that multiplication is done before addition. Can
;;; you design appropriate predicates, selectors, and constructors for this
;;; notation such that our derivative program still works?

(define (sum? x)
  (and (pair? x) (pair? (cdr x)) (memq '+ x)))
(define (product? x)
  (and (pair? x) (pair? (cdr x)) (and (memq '* x)
                                      (not (memq '+ x)))))

(define (addend s)
  (let ((res (take-while (lambda (x) (not (eq? x '+))) s)))
   (if (null? (cdr res)) (car res) res)))
(define (augend s)
  (let ((res (cdr (drop-while (lambda (x) (not (eq? x '+))) s))))
   (if (null? (cdr res)) (car res) res)))
(define (multiplier p)
  (let ((res (take-while (lambda (x) (not (eq? x '*))) p)))
   (if (null? (cdr res)) (car res) res)))
(define (multiplicand p)
  (let ((res (cdr (drop-while (lambda (x) (not (eq? x '*))) p))))
   (if (null? (cdr res)) (car res) res)))

(define expr '(x + 3 * (x + y + 2)))

(test 4
      (deriv expr 'x))
(test 3
      (deriv expr 'y))
(test 0
      (deriv expr 'z))

;;; }}}
