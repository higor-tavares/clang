#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp;
    char phrase[100];
    printf("Escreva uma frase curta ate 100 caracteres:\n");
    gets(phrase);
    fp = fopen("phrase.txt", "w");
    if(fp == NULL){
        printf("Erro ao criar o arquivo\n");
        exit(1);
    }
    fputs(phrase,fp);
    fclose(fp);
    return 0;
}
