CC = gcc
FLAGS =  I.
OUT = ./out
SRC = ./src
FUN = ${SRC}/functions
PON = ${SRC}/ponteiros
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
build-struct: 
	${CC} ${FUN}/struct.c -o ${OUT}/struct
run-struct:
	${OUT}/struct
build-struct-ref: 
	${CC} ${FUN}/struct-ref.c -o ${OUT}/struct-ref
run-struct-ref:
	${OUT}/struct-ref
build-matriz: 
	${CC} ${FUN}/matriz.c -o ${OUT}/matriz
run-matriz:
	${OUT}/matriz
build-seta: 
	${CC} ${FUN}/seta.c -o ${OUT}/seta
run-seta:
	${OUT}/seta
build-ponteiro: 
	${CC} ${PON}/ponteiro.c -o ${OUT}/ponteiro
run-ponteiro:
	${OUT}/ponteiro
build-comparacoes: 
	${CC} ${PON}/comparacoes.c -o ${OUT}/comparacoes
run-comparacoes:
	${OUT}/comparacoes
build-mem-access: 
	${CC} ${PON}/mem-access.c -o ${OUT}/mem-access
run-mem-access:
	${OUT}/mem-access