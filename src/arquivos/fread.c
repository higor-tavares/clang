#include <stdio.h>
#include <stdlib.h>

int * readIntArray(char *filename, int size){
    FILE * file;
    int *values;
    values = (int *) malloc(size * sizeof(int));
    file = fopen(filename, "rb");
    if(file == NULL){
        printf("ERROR: Cannot read the file %s, file not found", filename);
        exit(1);
    }
     
    fread(values, sizeof(int), size, file);
    fclose(file);
    return values;
}   

int main(){
    int *readedValues, size = 10;
    char filename[45];

    printf("Filename: ");
    scanf("%s",filename);
    
    readedValues = readIntArray(filename, size);    
    for (int i = 0; i < size; i++){
        printf("array[%d] = %d\n", i, readedValues[i]);
    }
    return 0;
}