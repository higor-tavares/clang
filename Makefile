CC = gcc
FLAGS =  I.
OUT = ./out
SRC = ./src
FUN = ${SRC}/functions
#Functions
build-void: 
	${CC} ${FUN}/void.c -o ${OUT}/void
run-void:
	${OUT}/void
build-referencia: 
	${CC} ${FUN}/referencia.c -o ${OUT}/referencia
run-referencia:
	${OUT}/referencia