(use sicp test)
;;; Huffman coding

;;; Auxiliary functions {{{
(define (make-leaf symbol weight)
  (list 'leaf symbol weight))
(define (leaf? object)
  (eq? (car object) 'leaf))
(define (symbol-leaf x) (cadr x))
(define (weight-leaf x) (caddr x))

(define (make-code-tree left right)
  (list left
        right
        (append (symbols left) (symbols right))
        (+ (weight left) (weight right))))

(define (left-branch tree) (car tree))
(define (right-branch tree) (cadr tree))
(define (symbols tree)
  (if (leaf? tree)
      (list (symbol-leaf tree))
      (caddr tree)))
(define (weight tree)
  (if (leaf? tree)
      (weight-leaf tree)
      (cadddr tree)))

(define (decode bits tree)
  (define (decode-1 bits current-branch)
    (if (null? bits)
        '()
        (let ((next-branch
               (choose-branch (car bits) current-branch)))
          (if (leaf? next-branch)
              (cons (symbol-leaf next-branch)
                    (decode-1 (cdr bits) tree))
              (decode-1 (cdr bits) next-branch)))))
  (decode-1 bits tree))
(define (choose-branch bit branch)
  (cond ((= bit 0) (left-branch branch))
        ((= bit 1) (right-branch branch))
        (else (error "bad bit -- CHOOSE-BRANCH" bit))))

(define (adjoin-set x set)
  (cond ((null? set) (list x))
        ((< (weight x) (weight (car set))) (cons x set))
        (else (cons (car set)
                    (adjoin-set x (cdr set))))))

(define (make-leaf-set pairs)
  (if (null? pairs)
      '()
      (let ((pair (car pairs)))
        (adjoin-set (make-leaf (car pair)    ; symbol
                               (cadr pair))  ; frequency
                    (make-leaf-set (cdr pairs))))))
;;; }}}

;;; Exercise 2.67 {{{
;;;
;;; Define an encoding tree and a sample message:

(define sample-tree
  (make-code-tree (make-leaf 'A 4)
                  (make-code-tree
                   (make-leaf 'B 2)
                   (make-code-tree (make-leaf 'D 1)
                                   (make-leaf 'C 1)))))

(define sample-message '(0 1 1 0 0 1 0 1 0 1 1 1 0))

;;; Use the decode procedure to decode the message, and give the result.

(test '(A D A B B C A)
      (decode sample-message sample-tree))

;;; }}}

;;; Exercise 2.68 {{{
;;;
;;; The encode procedure takes as arguments a message and a tree and produces
;;; the list of bits that gives the encoded message.

(define (encode message tree)
  (if (null? message)
      '()
      (append (encode-symbol (car message) tree)
              (encode (cdr message) tree))))

;;; Encode-symbol is a procedure, which you must write, that returns the list
;;; of bits that encodes a given symbol according to a given tree. You should
;;; design encode-symbol so that it signals an error if the symbol is not in
;;; the tree at all. Test your procedure by encoding the result you obtained in
;;; exercise 2.67 with the sample tree and seeing whether it is the same as the
;;; original sample message.

(define (encode-symbol symbol tree)
  (let proc ((tree tree))
    (cond ((null? tree)
           (error "Empty tree"))
          ((leaf? tree)
           (if (eq? (symbol-leaf tree) symbol)
             '()
             (error "Symbol not in tree at leaf")))
          ((memq symbol (symbols (left-branch tree)))
           (cons 0 (proc (left-branch tree))))
          ((memq symbol (symbols (right-branch tree)))
           (cons 1 (proc (right-branch tree))))
          (else
            (error "Symbol not in tree")))))

(test sample-message
      (encode (decode sample-message sample-tree) sample-tree))

;;; }}}

;;; Exercise 2.69 {{{
;;;
;;; The following procedure takes as its argument a list of symbol-frequency
;;; pairs (where no symbol appears in more than one pair) and generates
;;; a Huffman encoding tree according to the Huffman algorithm.

(define (generate-huffman-tree pairs)
  (successive-merge (make-leaf-set pairs)))

;;; Make-leaf-set is the procedure given above that transforms the list of
;;; pairs into an ordered set of leaves. Successive-merge is the procedure you
;;; must write, using make-code-tree to successively merge the smallest-weight
;;; elements of the set until there is only one element left, which is the
;;; desired Huffman tree. (This procedure is slightly tricky, but not really
;;; complicated. If you find yourself designing a complex procedure, then you
;;; are almost certainly doing something wrong. You can take significant
;;; advantage of the fact that we are using an ordered set representation.)

(define (successive-merge leaf-set)
  (car (let proc ((tree-set leaf-set))
        (if (or (null? tree-set) (null? (cdr tree-set)))
          tree-set
          (let ((min1 (car tree-set))
                (min2 (cadr tree-set))
                (rest (cddr tree-set)))
            (proc (adjoin-set (make-code-tree min1 min2) rest)))))))

;;; }}}

;;; Exercise 2.70 {{{
;;;
;;; The following eight-symbol alphabet with associated relative frequencies
;;; was designed to efficiently encode the lyrics of 1950s rock songs. (Note
;;; that the ``symbols'' of an ``alphabet'' need not be individual letters.)

;; A	2	NA	16
;; BOOM	1	SHA	3
;; GET	2	YIP	9
;; JOB	2	WAH	1

;;; Use generate-huffman-tree (exercise 2.69) to generate a corresponding
;;; Huffman tree, and use encode (exercise 2.68) to encode the following
;;; message:

;; Get a job
;;
;; Sha na na na na na na na na
;;
;; Get a job
;;
;; Sha na na na na na na na na
;;
;; Wah yip yip yip yip yip yip yip yip yip
;;
;; Sha boom

;;; How many bits are required for the encoding? What is the smallest number of
;;; bits that would be needed to encode this song if we used a fixed-length
;;; code for the eight-symbol alphabet?

(define rock-tree (generate-huffman-tree
                    '((A 2) (BOOM 1) (GET 2) (JOB 2)
                            (NA 16) (SHA 3) (YIP 9) (WAH 1))))

(define rock-message '(GET A JOB
                           SHA NA NA NA NA NA NA NA NA
                           GET A JOB
                           SHA NA NA NA NA NA NA NA NA
                           WAH YIP YIP YIP YIP YIP YIP YIP YIP YIP
                           SHA BOOM))

(define rock-encoded (encode rock-message rock-tree))
(test rock-encoded
      '(1 1 1 1 1 1 1 0 0 1 1 1 1 0 1 1 1 0 0 0 0 0 0 0 0 0 1 1 1 1 1 1 1 0 0 1 1 1 1 0 1 1 1 0 0 0 0 0 0 0 0 0 1 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 1 1 0 1 1 0 1 1))

(test 84
      (length rock-encoded))

(test 108
      (* 3 (length rock-message)))

;;; }}}

;;; Exercise 2.71 {{{
;;;
;;; Suppose we have a Huffman tree for an alphabet of n symbols, and that the
;;; relative frequencies of the symbols are 1, 2, 4, ..., 2n-1. Sketch the tree
;;; for n=5; for n=10. In such a tree (for general n) how many bits are
;;; required to encode the most frequent symbol? the least frequent symbol?

;; After the initial pair, 1 and 2, which together occupy one bit, each
;; additional doubling in the frequency list requires an additional bit in the
;; final encoding. However, since more frequent symbols require fewer bits, the
;; most frequent symbol requires 1 bit and the least frequent
;; $\lfloor \lg{2^n - 1} \rfloor$ bits.

;;; }}}

;;; Exercise 2.72 {{{
;;;
;;; Consider the encoding procedure that you designed in exercise 2.68. What is
;;; the order of growth in the number of steps needed to encode a symbol? Be
;;; sure to include the number of steps needed to search the symbol list at
;;; each node encountered. To answer this question in general is difficult.
;;; Consider the special case where the relative frequencies of the n symbols
;;; are as described in exercise 2.71, and give the order of growth (as
;;; a function of n) of the number of steps needed to encode the most frequent
;;; and least frequent symbols in the alphabet.

;;; }}}
