#include <stdio.h>
#include <stdlib.h>

struct person
{
    char name[45];
    int age;
};

typedef struct person person;

int main()
{
    person p1 = {"Joao Matheus Braga Freire", 1};
    printf("Name: %s, Age: %d\n", p1.name, p1.age);
    return 0;
}