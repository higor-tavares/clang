#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *arq;
    arq = fopen("bonequinho.gif","rb");
    if(arq == NULL){
        printf("Erro na abertura do arquivo");
        exit(1);
    }
    int size;
    fseek(arq,0, SEEK_END);
    size = ftell(arq);
    fclose(arq);
    arq = NULL;
    printf("O tamanho da imagem bonequinho.gif : %d bytes\n",size);
    return 0;
}