#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *arq;
    char c;
    arq = fopen("hello","r");
    if(arq == NULL){
        printf("Erro: Nao foi possivel ler o arquivo\n");
        exit(1);
    }
    while((c = fgetc(arq)) != EOF){
        printf("%c",c);
    }
    printf("\n");
    fclose(arq);
    return 0;
}