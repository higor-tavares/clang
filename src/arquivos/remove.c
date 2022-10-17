#include <stdio.h>
#include <stdlib.h>

int main(){
    int status = remove("database/person2.txt");
    if(status != 0){
        printf("Erro na remocao do arquivo\n");
        exit(1);
    }
    printf("Arquivo removido com sucesso!\n");
    return 0;
}