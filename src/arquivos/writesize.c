#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *file;
    char str[100] = "The Hobbit, or There and Back Again";
    int size = strlen(str);
    
    file = fopen("sample.txt", "wb");
    if(file == NULL){
        printf("ERRO\n");
        exit(1);
    }
    fwrite(&size, sizeof(int), 1, file);
    fwrite(str, sizeof(char), size, file);
    fclose(file);
    return 0;
}