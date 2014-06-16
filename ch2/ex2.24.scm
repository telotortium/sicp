;;; Exercise 2.24.  Suppose we evaluate the expression (list 1 (list 2 (list
;;; 3 4))). Give the result printed by the interpreter, the corresponding
;;; box-and-pointer structure, and the interpretation of this as a tree (as in
;;; figure 2.6).

;;;;

;; Value
'(1 (2 (3 4)))

;; Box-pointer
;; xx -> xx -> ()
;; |     |
;; v     v
;; 1     xx -> xx -> ()
;;       |     |
;;       v     v
;;       2     xx -> xx -> ()
;;             |     |
;;             v     v
;;             3     4

;;  Tree
;;  -----x-----
;;  |         |
;;  v         v
;;  1    -----x-----
;;       |         |
;;       v         v
;;       2    -----x-----
;;            |         |
;;            v         v
;;            3         4
