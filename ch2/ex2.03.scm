;; Implement two different but equivalent representations of rectangles in the
;; plane.

;;; Auxiliary functions {{{
(define (make-point x y)
  (cons x y))
(define (x-point p)
  (car p))
(define (y-point p)
  (cdr p))
(define (print-point p)
  (display "(")
  (display (x-point p))
  (display ",")
  (display (y-point p))
  (display ")"))
;;; }}}

;; First representation -- origin and opposite points {{{
(define (make-rectangle origin dx dy)
  (cons origin
        (make-point (+ (x-point origin) dx)
                    (+ (y-point origin) dy))))
(define (dx rect)
  (- (x-point (cdr rect))
     (x-point (car rect))))
(define (dy rect)
  (- (y-point (cdr rect))
     (y-point (car rect))))
;; }}}

;; Second representation -- origin, dx, and dy {{{
(define (make-rectangle origin dx dy)
  (cons origin (cons dx dy)))
(define (dx rect)
  (cadr rect))
(define (dy rect)
  (cddr rect))
;; }}}

(define (area rect)
  (* (dx rect) (dy rect)))
(define (perimeter rect)
  (* 2 (+ (dx rect)
          (dy rect))))

(area (make-rectangle (make-point 0 0) 1.5 1.5))
; => 2.25
