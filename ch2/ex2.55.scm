;;; Exercise 2.55.  Eva Lu Ator types to the interpreter the expression

(car ''abracadabra)

;;; To her surprise, the interpreter prints back quote. Explain.

;;;;

''abracadabra

;;; desugars to

(quote (quote abracadabra))

;;; When this expression is evaluated, the outer `quote` is stripped, but the
;;; inner one remains, giving the observed result, `quote`.
