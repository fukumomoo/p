#!/usr/bin/env gst -f

Number extend [
    fib [
        ^ self < 2 
            ifTrue: [ 1 ]
            ifFalse: [ (self - 1) fib + (self - 2) fib ].
    ]
]

Transcript showCr: 25 fib printString.