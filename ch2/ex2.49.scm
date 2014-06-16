;;; Exercise 2.49.
;;;
;;; Use segments->painter to define the following primitive painters:

;;; a.
;;;
;;; The painter that draws the outline of the designated frame.

(define (draw-outline frame)
  (let ((p1 (make-vect 0 0))
        (p2 (make-vect 1 0))
        (p3 (make-vect 1 1))
        (p4 (make-vect 0 1)))
    (segments->painter (list (make-segment p1 p2)
                             (make-segment p2 p3)
                             (make-segment p3 p4)
                             (make-segment p4 p1)))))

;; b.
;;
;; The painter that draws an ``X'' by connecting opposite corners of the frame.

(define (draw-X frame)
  (let ((p1 (make-vect 0 0))
        (p2 (make-vect 1 0))
        (p3 (make-vect 1 1))
        (p4 (make-vect 0 1)))
    (segments->painter (list (make-segment p1 p3)
                             (make-segment p2 p4)))))

;;; c.
;;;
;;; The painter that draws a diamond shape by connecting the midpoints of the
;;; sides of the frame.

(define (draw-diamond frame)
  (let ((p1 (make-vect 0.5 0))
        (p2 (make-vect 1 0.5))
        (p3 (make-vect 0.5 1))
        (p4 (make-vect 0 0.5)))
    (segments->painter (list (make-segment p1 p2)
                             (make-segment p2 p3)
                             (make-segment p3 p4)
                             (make-segment p4 p1)))))

;;; d.
;;;
;;; The wave painter.

; Eh ... I'll take a pass on it for now. It's pretty complex.
