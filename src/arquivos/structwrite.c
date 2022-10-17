#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char name[40];
    int age;
} Person;

void savePerson(Person *p){
    FILE *file;
    file = fopen("database", "wb");
    if(file == NULL){
        printf("ERROR\n");
        exit(1);
    }
    fwrite(p, sizeof(Person), 1, file);
    printf("Saved ->  Name: %s, Age: %d\n", p->name, p->age);
    fclose(file);
}

int main(){
    Person *p = malloc(sizeof(Person));
    printf("your name: ");
    gets(p->name);
    printf("your age: ");
    scanf("%d", &(p->age));
    savePerson(p);
    return 0;
}