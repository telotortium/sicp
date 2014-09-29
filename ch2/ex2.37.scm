(use sicp test)
;; Matrix represented as list of rows:
;;
;; ((1 2 3 4) (4 5 6 6) (6 7 8 9)) is a 3x4 matrix.
;;
;; Fill in matrix operations below:

(define (dot-product v w)
  (accumulate + 0 (map * v w)))
(define (matrix-*-vector m v)
  (map (lambda (row) (dot-product row v)) m))
(define (transpose mat)
  (accumulate-n cons '() mat))
(define (matrix-*-matrix m n)
  (let ((cols (transpose n)))
    (map (lambda (w) (matrix-*-vector cols w)) m)))

(define m '((1 2 3 4)
            (4 5 6 6)
            (6 7 8 9)))
(define v '(1 2 3 4))
(define i4 '((1 0 0 0)
             (0 1 0 0)
             (0 0 1 0)
             (0 0 0 1)))

(test m
      (matrix-*-matrix m i4))
(test (transpose m)
      (matrix-*-matrix i4 (transpose m)))
