#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char name[40];
    int age;
} Person;

Person  getPerson(){
    FILE *file;
    Person p;
    file = fopen("database/person1", "rb");
    if(file == NULL){
        printf("ERROR\n");
        exit(1);
    }
    fread(&p, sizeof(p), 1, file);
    fclose(file);
    return p;
}

int main(){
    Person p;
    p = getPerson();
    printf("Name: %s, Age: %d\n", p.name, p.age);
    return 0;
}