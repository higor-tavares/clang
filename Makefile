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
build-array-param: 
	${CC} ${FUN}/array-param.c -o ${OUT}/array-param
run-array-param:
	${OUT}/array-param

build-matriz: 
	${CC} ${FUN}/matriz.c -o ${OUT}/matriz
run-matriz:
	${OUT}/matriz