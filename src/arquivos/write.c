#include <stdio.h>
#include <stdlib.h>
/*
Modos de leitura de arquivos
r -> texto -> Leitura. O arquivo deve existir
w -> texto -> Escrita. Cria o arquivo se não houver, sobrescreve o anteior
a -> texto -> Escrita. Append.
rb, wb, ab -> binario.
r+ -> Leitura/Escrita. o arquivo deve existir e pode ser modificado
w+ -> Leitura/Escrita. Sobrescreve o anterior.
a+ -> Leitura/Escrita append.
r+b, w+b, a+b -> binario.
*/
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
