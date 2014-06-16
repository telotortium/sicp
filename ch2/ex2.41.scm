;;; Exercise 2.41.
;;;
;;; Write a procedure to find all ordered triples of distinct positive integers
;;; i, j, and k less than or equal to a given integer n that sum to a given
;;; integer s.

;;;;

(define (ordered-triples n)
  (flatmap
    (lambda (i)
      (flatmap
        (lambda (j)
          (map (lambda (k) (list i j k))
               (enumerate-interval (+ j 1) n)))
        (enumerate-interval (+ i 1) n)))
    (enumerate-interval 1 n)))

(define (ordered-triples-with-sum n sum)
  (filter (lambda (x)
            (= sum (fold-right + 0 x)))
          (ordered-triples n)))
