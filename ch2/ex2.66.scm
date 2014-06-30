;; Lookup for binary-tree map.

(define (lookup given-key set-of-records)
  (if (null? set-of-records)
    #f
    (let ((this-entry (entry set-of-records)))
     (cond ((equal? given-key (car this-entry))
            this-entry)
           ((< given-key (car this-entry))
            (lookup given-key (left-branch set-of-records)))
           (else
            (lookup given-key (right-branch set-of-records)))))))
