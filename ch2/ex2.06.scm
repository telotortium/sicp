;; Church numerals

(define zero (lambda (f) (lambda (x) x)))
(define (add-1 n)
  (lambda (f) (lambda (x) (f ((n f) x)))))

;; Define one via (add-1 zero)
(add-1 zero)
((lambda (f)
   (lambda (x)
     (f ((zero f) x)))))
((lambda (f)
   (lambda (x)
     (f (((lambda (f)
            (lambda (x) x)) f)
         x)))))
((lambda (f)
   (lambda (x)
     (f (((lambda (x) x) f)
         x)))))
((lambda (f)
   (lambda (x)
     (f (f
         x)))))
(define one
  (lambda (f) (lambda (x) (f x))))

;; Define two via (add-1 one)
(add-1 one)
((lambda (f)
   (lambda (x)
     (f ((one f) x)))))
((lambda (f)
   (lambda (x)
     (f (((lambda (f) (lambda (x) (f x))) f)
         x)))))
((lambda (f)
   (lambda (x)
     (f (f x)))))
(define two
  (lambda (f) (lambda (x) (f (f x)))))

;; We can see here that the Church numeral of magnitude n corresponds to
;; the application of the function f in the lambdas above n times to the base
;; case argument x. Here are some examples:

(define (incr x) (+ x 1))
((zero incr) 0)
; => 0
((one incr) 0)
; => 1
((two incr) 0)
; => 2

;; From here, we conclude that to make an add procedure, we must simulate
;; applying f a times to the result of applying f b times to x.
(define (add a b)
  (lambda (f)
    (lambda (x)
      ((a f) ((b f) x)))))
(((add one two) incr) 0)
; => 3

;; Define mul between two integers -- this one's pretty easy because it just
;; involves applying b a times.
(define (mul a b)
  (a b))
(((mul one two) incr) 0)
; => 2
