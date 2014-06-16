(define (queens board-size)
  (define (queen-cols k)
    (if (= k 0)
        (list empty-board)
        (filter
         (lambda (positions) (safe? k positions))
         (flatmap
          (lambda (rest-of-queens)
            (map (lambda (new-row)
                   (adjoin-position new-row k rest-of-queens))
                 (enumerate-interval 1 board-size)))
          (queen-cols (- k 1))))))
  (queen-cols board-size))

;; The representation of an empty board
(define empty-board '())
;; Add a position (new-row . k) to the list rest-of-queens containing positions
;; for queens.
(define (adjoin-position new-row k rest-of-queens)
  (cons (cons new-row k) rest-of-queens))
;; Is the position of the queen in column k safe with respect to the positions
;; in the list positions?
(define (safe? k positions)
  ;; Are positions p1 and p2 safe with respect to each other?
  ;; p1 and p2 are pairs (x . y).
  (define (pos-safe? p1 p2)
    (let ((x1 (car p1))
          (y1 (cdr p1))
          (x2 (car p2))
          (y2 (cdr p2)))
      (let ((dx (- x2 x1))
            (dy (- y2 y1)))
        (or (and (= x1 x2) (= y1 y2))
            (not (or (= 0 dx)
                     (= 0 dy)
                     (= (abs dx) (abs dy))))))))
  (let ((last-position (find (lambda (position)
                               (= k (cdr position)))
                             positions)))
    ;; Filter list to contain only unsafe positions.
    (not (find (lambda (point)
                 (not (pos-safe? point last-position)))
               positions))))
