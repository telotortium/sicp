;; Extract 7 from following lists with car and cdr
((lambda (x) (car (cdr (car (cdr (cdr x)))))) '(1 3 (5 7) 9))

((lambda (x) (car (car x))) '((7)))

((lambda (x) (car (cdr (car (cdr (car (cdr (car (cdr (car (cdr (car (cdr x)))))))))))))
 '(1 (2 (3 (4 (5 (6 7)))))))
