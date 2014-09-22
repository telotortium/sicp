;;; Auxiliary functions {{{
(define (add-interval x y)
  (make-interval (+ (lower-bound x) (lower-bound y))
                 (+ (upper-bound x) (upper-bound y))))
(define (mul-interval x y)
  (let ((p1 (* (lower-bound x) (lower-bound y)))
        (p2 (* (lower-bound x) (upper-bound y)))
        (p3 (* (upper-bound x) (lower-bound y)))
        (p4 (* (upper-bound x) (upper-bound y))))
    (make-interval (min p1 p2 p3 p4)
                   (max p1 p2 p3 p4))))
(define (div-interval x y)
  (mul-interval x
                (make-interval (/ 1.0 (upper-bound y))
                               (/ 1.0 (lower-bound y)))))
;;; }}}

;; # Exercise 2.7. {{{
;;
;; Alyssa's program is incomplete because she has not specified
;; the implementation of the interval abstraction. Here is a definition of the
;; interval constructor:

(define (make-interval a b) (cons a b))

;; Define selectors upper-bound and lower-bound to complete the implementation.

;;;;

(define (lower-bound int)
  (car int))
(define (upper-bound int)
  (cdr int))

;; }}}

;; # Exercise 2.8. {{{
;;
;; Using reasoning analogous to Alyssa's, describe how the difference of two
;; intervals may be computed. Define a corresponding subtraction procedure,
;; called sub-interval.

;;;;

;; The difference between two intervals, $[c, d] - [a, b]$, can be computed as
;; follows:
;;
;; * The maximum value of the difference is the maximum of the first term minus
;;   the minumum of the second, $d - a$.
;; * The minimum value is the minimum value of the first term minus the maximum
;;   of the second, $c - b$.
;;
;; Thus, $[c, d] - [a, b] = [c - b, d - a]$.
(define (sub-interval x y)
  (make-interval (- (lower-bound x)
                    (upper-bound y))
                 (- (upper-bound x)
                    (lower-bound y))))

;; }}}

;; # Exercise 2.9. {{{
;;
;; The width of an interval is half of the difference between its upper and
;; lower bounds. The width is a measure of the uncertainty of the number
;; specified by the interval. For some arithmetic operations the width of the
;; result of combining two intervals is a function only of the widths of the
;; argument intervals, whereas for others the width of the combination is not
;; a function of the widths of the argument intervals. Show that the width of
;; the sum (or difference) of two intervals is a function only of the widths of
;; the intervals being added (or subtracted). Give examples to show that this
;; is not true for multiplication or division.

;;;;

;; For addition, consider an interval as consisting of its midpoint and width.
;; Then the sum of two intervals, $(a, wa) + (b, wb)$, is
;;
;; \begin{equation}
;; (a, wa) + (b, wb) = [a-wa, a+wa] + [b-wb, b+wb]
;;                   = [a+b-(wa+wb), a+b+wa+wb]
;;                   = (a+b, wa+wb)
;; \end{equation}
;;
;; Thus, the width is $wa+wb$. For subtraction, we have $wa+wb$ as well:
;;
;; \begin{equation}
;; (a, wa) - (b, wb) = [a-wa, a+wa] - [b-wb, b+wb]
;;                   = [a-b-(wa+wb), a-b+wa+wb]
;;                   = (a-b, wa+wb)
;; \end{equation}
;;
;; However, the widths depend on the center of the interval for multiplication
;; and division:
;;
;; \begin{equation}
;; (a, wa) * (b, wb):
;; (a + wa) * (b + wb) = (a * b + a * wb + b * wa + wa * wb)
;;                     = (a * b + wa * wb + (a * wb + b * wa))
;;                     = (a * b + wa * wb + a * wb + b * wa)
;; (a - wa) * (b - wb) = (a * b + wa * wb - a * wb - b * wa)
;; (a + wa) * (b - wb) = (a * b + b * wa - a * wb - wa * wb)
;; (a - wa) * (b + wb) = (a * b + a * wb - b * wa - wa * wb)
;; \end{equation}

;; }}}

;; # Exercise 2.10. {{{
;;
;; Ben Bitdiddle, an expert systems programmer, looks over Alyssa's shoulder
;; and comments that it is not clear what it means to divide by an interval
;; that spans zero. Modify Alyssa's code to check for this condition and to
;; signal an error if it occurs.

;;;;

(define (div-interval x y)
  (let ((ub (upper-bound y))
        (lb (lower-bound y)))
    (if (and (<= lb 0) (>= ub 0))
      (error "Cannot divide by an interval spanning 0")
      (mul-interval x
                    (make-interval (/ 1.0 ub)
                                   (/ 1.0 lb))))))

;(div-interval (make-interval 4 5)
;              (make-interval -1 1))
; => ERROR

;; }}}

;; # Exercise 2.11. {{{
;;
;; In passing, Ben also cryptically comments: ``By testing the signs of the
;; endpoints of the intervals, it is possible to break mul-interval into nine
;; cases, only one of which requires more than two multiplications.'' Rewrite
;; this procedure using Ben's suggestion.

;;;;

(define (sign x)
  (if (< x 0) -1 1))
(define (mul-interval x y)
  (letrec ((ux (upper-bound x))
           (lx (lower-bound x))
           (uy (upper-bound y))
           (ly (lower-bound y))
           (pux (> (sign ux) 0))
           (plx (> (sign lx) 0))
           (puy (> (sign uy) 0))
           (ply (> (sign ly) 0)))
    (cond
           ; All positive
           ((and pux plx puy ply)
            (make-interval (* lx ly)
                           (* ux uy))
            )

           )

    )
  )

;; }}}

;; # Exercise 2.12. {{{
;;
;; Define a constructor make-center-percent that takes a center and
;; a percentage tolerance and produces the desired interval. You must also
;; define a selector percent that produces the percentage tolerance for a given
;; interval. The center selector is the same as the one shown above.

;;;;

;;; Auxiliary functions {{{
(define (make-center-width c w)
  (make-interval (- c w) (+ c w)))
(define (center i)
  (/ (+ (lower-bound i) (upper-bound i)) 2))
(define (width i)
  (/ (- (upper-bound i) (lower-bound i)) 2))
;;; }}}

(define (make-center-percent c p)
  (let ((w (abs (* c (/ p 100)))))
  (make-center-width c w)))
(define (percent i)
  (abs (* 100 (/ (width i)
                 (center i)))))
;; }}}

;; # Exercise 2.13. {{{
;;
;; Show that under the assumption of small percentage tolerances there is
;; a simple formula for the approximate percentage tolerance of the product of
;; two intervals in terms of the tolerances of the factors. You may simplify
;; the problem by assuming that all numbers are positive.

;;;;

;; Given $r = percentage / 100$, we have
;;
;; \begin{equation}
;; (a - ra * a) * (b - rb * b) = ab (1 - (ra + rb) + ra * rb)
;; (a + ra * a) * (b + rb * b) = ab (1 + (ra + rb) + ra * rb)
;; \end{equation}
;;
;; Given that a and b are positive and ra and rb are small, we can neglect the
;; quadratic terms to obtain
;;
;; \begin{equation}
;; (a, %a) * (b, %b) = (ab, %a + %b)
;; \end{equation}

;; }}}

;; # Exercise 2.14. {{{
;;
;; {{{
;;
;; After considerable work, Alyssa P. Hacker delivers her finished system.
;; Several years later, after she has forgotten all about it, she gets
;; a frenzied call from an irate user, Lem E. Tweakit. It seems that Lem has
;; noticed that the formula for parallel resistors can be written in two
;; algebraically equivalent ways:
;;
;; \begin{equation}
;; \frac{R_1 R_2}{R_1 + R_2}
;; \end{equation}
;;
;; and
;;
;; \begin{equation}
;; \frac{1}{1/R_1 + 1/R_2}
;; \end{equation}
;;
;;
;; He has written the following two programs, each of which computes the
;; parallel-resistors formula differently:

(define (par1 r1 r2)
  (div-interval (mul-interval r1 r2)
                (add-interval r1 r2)))
(define (par2 r1 r2)
  (let ((one (make-interval 1 1)))
   (div-interval one
                 (add-interval (div-interval one r1)
                               (div-interval one r2)))))

;; Lem complains that Alyssa's program gives different answers for the two ways
;; of computing. This is a serious complaint.
;;
;; }}}

;; Demonstrate that Lem is right. Investigate the behavior of the system on
;; a variety of arithmetic expressions. Make some intervals A and B, and use
;; them in computing the expressions A/A and A/B. You will get the most insight
;; by using intervals whose width is a small percentage of the center value.
;; Examine the results of the computation in center-percent form (see exercise
;; 2.12).

;;;;

;; From Taylor expanding around $ra = 0$, one can obtain
;; $1 / (a \pm ra * a) = (1 / a) (1 \mp ra)$ for small tolerances relative to
;; resistances:
;;
;; \begin{equation}
;; 1 / R_1 + 1 / R_2 = (1 / R_1 + 1 / R_2) \pm ((1 / R_1) * R_1 * (1 + %R_1)
;;                                              + (1 / R_2) * R_2 * (1 + %R_2))
;; 1 / (1 / R_1 + 1 / R_2) = Result \pm (2 + %R_1 + %R_2)
;; \end{equation}
;;
;; On the other hand,
;;
;; \begin{equation}
;; R_1 R_2 = Result (1 \pm (%R_1 + %R_2))
;; R_1 + R_2 = Result \pm (R_1 * %R_1 + R_2 * %R_2)
;; \end{equation}

;; }}}

;; # Exercise 2.15. {{{
;;
;; Eva Lu Ator, another user, has also noticed the different intervals computed
;; by different but algebraically equivalent expressions. She says that
;; a formula to compute with intervals using Alyssa's system will produce
;; tighter error bounds if it can be written in such a form that no variable
;; that represents an uncertain number is repeated. Thus, she says, par2 is
;; a ``better'' program for parallel resistances than par1. Is she right? Why?

;;;;

;; It seems so. Evaluating par2 results in
;;
;; \begin{equation}
;; \frac{1}{R^{-1}(1 \pm p_1) + R^{-2}(1 \pm p_1)} =
;; \frac{R_1 R_2}{R_1 + R_2} \left( \frac{R_1 + R_2 \pm (p_1 R_2 + p_2
;; R_1)}{R_1 + R_2} \right)^{-1}
;; \end{equation}
;;
;; while evaluating par1 results in
;;
;; \begin{equation}
;; \frac{R_1(1 \pm p_1) R_2(1 \pm p_2)}{R_1(1 \pm p_1) + R_2(1 \pm p_2)} =
;; \frac{R_1 R_2}{R_1 + R_2} \left(1 \mp (p_1 + p_2) \right)
;;     \left( \frac{R_1 + R_2 \pm (p_1 R_2 + p_2 R_1)}{R_1 + R_2} \right)^{-1}
;; \end{equation}
;;
;; with extra imprecision from the $1 \mp (p_1 + p_2)$, which results directly
;; from the uncertainty in the numerator.

;; }}}

;; # Exercise 2.16. {{{
;;
;; Explain, in general, why equivalent algebraic expressions may lead to
;; different answers. Can you devise an interval-arithmetic package that does
;; not have this shortcoming, or is this task impossible? (Warning: This
;; problem is very difficult.)

;;;;

;; }}}
