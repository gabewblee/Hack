// This file is part of www.nand2tetris.org
// and the book "The Elements of Computing Systems"
// by Nisan and Schocken, MIT Press.
// File name: projects/4/Fill.asm

// Runs an infinite loop that listens to the keyboard input. 
// When a key is pressed (any key), the program blackens the screen,
// i.e. writes "black" in every pixel. When no key is pressed, 
// the screen should be cleared.

// Fill.asm
// Continuously check keyboard (RAM[24576]).
// If a key is pressed → blacken screen (RAM[16384..24575] = -1).
// If no key → clear screen (RAM[16384..24575] = 0).

(OUTER)
@24576
D=M
@BLACK
D;JNE
@WHITE
0;JMP

(BLACK)
@FILLVAL
M=-1
@FILL
0;JMP

(WHITE)
@FILLVAL
M=0

(FILL)
@16384
D=A
@curr
M=D
@8192
D=A
@count
M=D

(INNER)
@count
D=M
@OUTER
D;JEQ

@FILLVAL
D=M
@curr
A=M
M=D
@curr
M=M+1

@count
M=M-1

@INNER
0;JMP
