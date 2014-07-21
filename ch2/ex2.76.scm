;;; Exercise 2.76
;;;
;;; As a large system with generic operations evolves, new types of data
;;; objects or new operations may be needed. For each of the three strategies
;;; -- generic operations with explicit dispatch, data-directed style, and
;;; message-passing-style -- describe the changes that must be made to a system
;;; in order to add new types or new operations. Which organization would be
;;; most appropriate for a system in which new types must often be added? Which
;;; would be most appropriate for a system in which new operations must often
;;; be added?

;; Steps to add types or operations:
;;
;; * explicit dispatch: Need to add an additional case in every operation when
;;   a new type is added, and need to explicitly dispatch on all types when
;;   a new operation is added.
;; * data-directed style: can add new types easily by implementing all the
;;   operations in a package and then importing it.
;; * message-passing style: can add new operations easily
;;   defined for a type, it can fall back to a default implementation or an
;;   error -- but adding new operations requires modifying every type.
