#include <stdio.h>
#include <stdlib.h>

#define NULL __DARWIN_NULL

int main(void){
    int **p; //2 "*" = 2 níveis , 2 dimensoes
    int i, j, linhas, colunas;
    linhas = 2;
    colunas = 3;
    p = (int **) malloc(linhas * sizeof(int *));
    for(i = 0; i < linhas; i++){
        p[i] = (int *) malloc(colunas * sizeof(int));
        for(j = 0; j < colunas; j ++){
            printf("Digite o valor para p[%d][%d]:",i,j);
            scanf("%d", &p[i][j]);
        }
    }
    printf("--------VALORES---------\n");
    for(i = 0; i < linhas; i ++){
        for(j = 0; j < colunas; j++){
            printf("p[%d][%d] =  %d \n", i, j, p[i][j]);
        }
    }
    for(i = 0; i < linhas; i++){
        free(p[i]);
        p[i] = NULL;
    }
    free(p);
    p = NULL;
    return 0;
}