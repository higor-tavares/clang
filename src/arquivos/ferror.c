#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *file = fopen("database/teste.txt","r");
    if(file == NULL){
        perror("Erro ao abrir o arquivo");
        exit(1);
    }
    fclose(file);
    return 0;
}