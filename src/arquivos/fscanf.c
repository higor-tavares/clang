#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *file;
    char text[45], name[45];
    int age; 
    float height;
    file = fopen("database/person2.json","r");
    if(file == NULL){
        printf("ERROR: cannot open the file\n");
        exit(1);
    }
    fscanf(file, "{\n\"name\": \"%s\",\n\"age\": %d,\n\"hight\":%f\n}", name, &age, &height);
    printf("name =  %s\n", name);
    printf("age = %d\n", age);
    printf("height = %.2f\n", height);
    fclose(file);
    return 0;
}