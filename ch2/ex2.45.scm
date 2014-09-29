(use sicp)

;;; Exercise 2.45.
;;;
;;; Right-split and up-split can be expressed as instances of a general
;;; splitting operation. Define a procedure split with the property that
;;; evaluating the definitions after it for right-split and up-split
;;; produces procedures right-split and up-split with the same behaviors as the
;;; ones already defined.

;;;;

(define (split first second)
  (lambda (painter n)
    (if (= n 0)
      painter
      (let ((smaller ((split first second) painter (- n 1))))
       (first painter (second smaller smaller))))))

;;;

;; Must reverse arguments to beside to put second argument to left of first.
(define right-split (split beside below))
(define up-split (split below beside))
