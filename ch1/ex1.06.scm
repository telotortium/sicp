;; Exercise 1.6.  Alyssa P. Hacker doesn't see why if needs to be provided as
;; a special form. ``Why can't I just define it as an ordinary procedure in
;; terms of cond?'' she asks. Alyssa's friend Eva Lu Ator claims this can
;; indeed be done, and she defines a new version of if:

(define (new-if predicate then-clause else-clause)
  (cond (predicate then-clause)
        (else else-clause)))

;; Eva demonstrates the program for Alyssa:

(new-if (= 2 3) 0 5)
;; => 5

(new-if (= 1 1) 0 5)
;; => 0

;; Delighted, Alyssa uses new-if to rewrite the square-root program:

; Ancillary defines {{{
(define (average x y)
  (/ (+ x y) 2))
(define (improve guess x)
  (average guess (/ x guess)))
(define (good-enough? guess x)
  (< (abs (- (square guess) x)) 0.001))
; }}}

(define (sqrt-iter guess x)
  (new-if (good-enough? guess x)
          guess
          (sqrt-iter (improve guess x)
                     x)))

;; What happens when Alyssa attempts to use this to compute square roots?
;; Explain.

;;;;;

;; When calling `new-if`, its arguments are always evaluated. Thus, even if the
;; else-branch, which calls `sqrt-iter`, should not be taken, it is
;; nevertheless evaluated due to strict evaluation, so calling `sqrt-iter`
;; results in infinite recursion.
