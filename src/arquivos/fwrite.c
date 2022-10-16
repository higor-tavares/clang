#include <stdio.h>
#include <stdlib.h>

void writeIntArray(char * filename, int size,  int * values){
    FILE *file;
    file = fopen(filename, "wb");
    if(file == NULL){
        printf("ERROR: Cannot create file %s\n", filename);
        exit(1);
    }
    int sizeOfRecorded = fwrite(values, sizeof(int), size, file);
    if(sizeOfRecorded != size){
        printf("ERROR: Cannot record the values\n");
        exit(1);
    }
    fclose(file);
}

int main(void) {
    int size;
    int *values;
    printf("How many values do you want to store?\n");
    scanf("%d", &size);
    values = (int *) malloc(size * sizeof(int));
    for(int i = 0; i < size; i++){
        printf("\narray[%d] : ",i);
        scanf("%d", &values[i]);
    }
    writeIntArray("integers", size, values);
    printf("The values were successfuly stored\n")
    return 0;
}