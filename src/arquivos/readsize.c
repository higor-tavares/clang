#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *file;
    char text[100];
    int size;
    file = fopen("sample.txt","rb");
    if(file == NULL){
        printf("ERROR: file %s not found\n","sample.txt");
        exit(1);
    }
    //a ordem e tipo dos atributos importa, 
    //pois a leitura consome os bytes do arquivo
    fread(&size, sizeof(int), 1, file);
    fread(text, sizeof(char), size, file);
    text[size] = '\0';
    printf("%s\n", text);
    fclose(file);
    return 0;
}