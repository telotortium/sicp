;;; Auxiliary functions {{{
(define (enumerate-interval lower upper)
  (if (> lower upper)
    '()
    (cons lower (enumerate-interval (+ lower 1) upper))))
(define (flatmap proc seq)
  (fold-right append '() (map proc seq)))
(define (prime-sum? pair)
  (prime? (+ (car pair) (cadr pair))))
(define (make-pair-sum pair)
  (list (car pair) (cadr pair) (+ (car pair) (cadr pair))))
;;; }}}

(define (unique-pairs n)
  (flatmap
    (lambda (i)
      (map (lambda (j) (list i j))
           (enumerate-interval 1 (- i 1))))
    (enumerate-interval 1 n)))

(define (prime-sum-pairs n)
  (map make-pair-sum
       (filter prime-sum?
               (unique-pairs n))))