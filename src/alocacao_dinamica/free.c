#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i, *p;
    p = (int *)malloc(50 * sizeof(int));
    if (p == NULL){
        printf("Erro: Memoria insuficiente!\n");
        exit(1);
    }
    for (i = 0; i < 50; i++){
        p[i] = i + 1;
    }
    for (i = 0; i < 50; i++){
        printf("%d\n", p[i]);
    }
    //libera o bloco de memoria alocado
    free(p);
    //Depois de liberar a memoria devemos limpar o ponteiro
    p = NULL;
    return 0;
}