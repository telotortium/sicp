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
    (map (lambda (row)
           (map (lambda (col) (dot-product row col))
                cols))
         m)))

(define m '((1 2 3 4) (4 5 6 6) (6 7 8 9)))
(define v '(1 2 3 4))
