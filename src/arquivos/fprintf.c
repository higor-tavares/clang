#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *file;
    char name[45] = "Paulo Tavares";
    int age = 26;
    float hight = 1.58;
    int result;
    file = fopen("database/person2.json","w");
    if(file == NULL){
        printf("ERROR: Cannot create the file!\n");
        exit(1);
    }
    result = fprintf(file, "{\n\"name\": \"%s\",\n\"age\": %d,\n\"hight\":%.2f\n}", name, age, hight);
    if(result < 0){
        printf("ERROR: Cannot write on file\n");
        exit(1);
    }
    fclose(file);
    file = NULL;
    return 0;
}