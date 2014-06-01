;; Exercise 1.7.  The good-enough? test used in computing square roots will not
;; be very effective for finding the square roots of very small numbers. Also,
;; in real computers, arithmetic operations are almost always performed with
;; limited precision. This makes our test inadequate for very large numbers.
;; Explain these statements, with examples showing how the test fails for small
;; and large numbers. An alternative strategy for implementing good-enough? is
;; to watch how guess changes from one iteration to the next and to stop when
;; the change is a very small fraction of the guess. Design a square-root
;; procedure that uses this kind of end test. Does this work better for small
;; and large numbers?

;;;;;

;; Here is the `good-enough?` function defined in the text:

(define (good-enough? guess x)
  (< (abs (- (square guess) x)) 0.001))

;; Notably, the threshold is an absolute value, no matter the size of the
;; guess. For small guesses, this will terminate even if 0.001 is of
;; a non-negligible magnitude compared to the guess. For large guesses, if the
;; guess doesn't have a precision of at least 0.001 at a certain magnitude, the
;; test may not ever terminate because there may be no value of `(square
;; guess)` that lies within 0.001 of x, due to limited precision.
;;
;; It is almost always better to define a threshold that is a multiple of the
;; order of magnitude of x:

(define (good-enough? guess x)
  (< (abs (/ (- (square guess) x)
            (square guess)))
     0.001))
