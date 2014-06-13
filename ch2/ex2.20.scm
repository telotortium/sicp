;;;; Filter a list to return numbers with the same parity (even or odd) as the
;;;; first element of the list.

;;;; Nonmutating

;;; Build element in reverse order for constant cons and reverse.
(define (filter pred xs)
  (define (iter xs as)
    (if (null? xs)
      as
      (iter
        (cdr xs)
        (if (pred (car xs))
          (cons (car xs) as)
          as))))
  (reverse (iter xs '())))


;;;; Mutating

;;; Keep reference to tail of returned list and modify it to append to it.
(define (filter pred xs)
  (define (iter xs head tail-cons)
    (if (null? xs)
      head
      (let ((first (car xs))
            (xs (cdr xs)))
        (if (not (pred first))
          (iter xs head tail-cons)
          (let ((head
                  (if (null? head)
                    (list first)
                    head)))
            (if (null? tail-cons)
              ;; First and last cons are the same to start.
              (iter xs head head)
              ;; Destructively append to list in constant time by setting cdr
              ;; of last cons cell in list.
              (begin
                (set-cdr! tail-cons (list first))
                (iter xs head (cdr tail-cons)))))))))
  (iter xs '() '()))

;;; Return a list of all arguments with the same parity (even or odd) as the
;;; first argument.
(define (same-parity first . rest)
  (let ((parity (even? first)))
   (cons first (filter (lambda (x)
                         (equal? (even? x) parity))
                       rest))))
