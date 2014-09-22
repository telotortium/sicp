;;; Exercise 2.49.
;;;
;;; Use segments->painter to define the following primitive painters:

;;; a.
;;;
;;; The painter that draws the outline of the designated frame.

(define outline
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

(define X
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

(define diamond
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

;; Stolen from Peter Danenberg
;;
;; Needs to be asymmetrical, so we can see rotations and flips.
(define wave
  (segments->painter
    (list
      ;; Left leg
      (make-segment (make-vect 0.3 1) (make-vect 0.4 0.6))
      (make-segment (make-vect 0.4 1) (make-vect 0.5 0.7))
      ;; Right leg
      (make-segment (make-vect 0.6 1) (make-vect 0.5 0.7))
      (make-segment (make-vect 0.7 1) (make-vect 0.6 0.6))
      ;; Torso
      (make-segment (make-vect 0.4 0.6) (make-vect 0.4 0.4))
      (make-segment (make-vect 0.6 0.6) (make-vect 0.6 0.4))
      ;; Left arm
      (make-segment (make-vect 0.4 0.4) (make-vect 0.2 0.35))
      (make-segment (make-vect 0.2 0.35) (make-vect 0.2 0.25))
      (make-segment (make-vect 0.2 0.25) (make-vect 0.45 0.3))
      ;; Right arm
      (make-segment (make-vect 0.6 0.4) (make-vect 0.8 0.45))
      (make-segment (make-vect 0.8 0.45) (make-vect 0.8 0.35))
      (make-segment (make-vect 0.8 0.35) (make-vect 0.55 0.3))
      ;; Neck
      (make-segment (make-vect 0.45 0.3) (make-vect 0.45 0.25))
      (make-segment (make-vect 0.55 0.3) (make-vect 0.55 0.25))
      ;; Head
      (make-segment (make-vect 0.45 0.25) (make-vect 0.425 0.25))
      (make-segment (make-vect 0.425 0.25) (make-vect 0.425 0.05))
      (make-segment (make-vect 0.425 0.05) (make-vect 0.575 0.05))
      (make-segment (make-vect 0.575 0.05) (make-vect 0.575 0.25))
      (make-segment (make-vect 0.575 0.25) (make-vect 0.55 0.25)))))
