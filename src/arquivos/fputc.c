#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

void write(char * str){
    char filename[15] = "teste.txt";
    FILE * file = fopen(filename, "w");
    if(file == NULL){
        printf("Error: Erro ao abrir o arquivo %s",filename);
        exit(1);
    }
    for(int i = 0; i < strlen(str); i++){
        fputc(str[i], file);
    }
    fclose(file);
}
int main(){
    char txt[100];
    printf("Entre com a string a ser escrita:");
    gets(txt);
    write(txt);
    return 0;
}