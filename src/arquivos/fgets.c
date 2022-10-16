#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

char * readFile(char * filename){
    FILE *arq;
    char str[255];
    char *result;
    arq = fopen(filename, "r");
    if(arq == NULL){
        printf("Problema ao ler o arquivo %s: File not found",filename);
        exit(1);
    }
    result = fgets(str, 255, arq);
    return result;
}

int main(){
    char filename[45];
    char *text;
    printf("Qual arquivo deseja ler?\n");
    gets(filename);
    strcpy(text, readFile(filename));
    printf("%s\n", text);
    return 0;
}