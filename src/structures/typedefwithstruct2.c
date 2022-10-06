#include <stdio.h>
#include <stdlib.h>
#define MAX 45

typedef struct{
    char name[MAX];
    int age;
} person;

int main(){
    person p1 = {"Paulo Higor Tavares Freire", 26};
    printf("Name: %s, Age: %d\n", p1.name, p1.age);
    return 0;
}