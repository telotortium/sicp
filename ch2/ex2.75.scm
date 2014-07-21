;;; Exercise 2.75 {{{
;;;
;;; Implement the constructor make-from-mag-ang in message-passing style. This
;;; procedure should be analogous to the make-from-real-imag procedure given
;;; above.

(define (make-from-mag-ang mag ang)
  (define (dispatch op)
    (cond ((eq? op 'magnitude) mag)
          ((eq? op 'angle) ang)
          ((eq? op 'real-part)
           (* mag (cos ang)))
          ((eq? op 'imag-part)
           (* mag (sin ang)))
          (else
            (error "Unknown op -- MAKE-FROM-MAG-ANG" op))))
  dispatch)

(define pi (* 2 (asin 1)))
(define z (make-from-mag-ang 1 (/ pi 4)))
(test 1
      (z 'magnitude))
(test (/ pi 4)
      (z 'angle))
(test (/ (sqrt 2) 2)
      (z 'real-part))
(test (/ (sqrt 2) 2)
      (z 'imag-part))
