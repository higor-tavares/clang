#include <stdio.h>
#include <strings.h>

struct person
{
    char name[45];
    short int age;
};

int main()
{
    // initialize the struct
    struct person higor = {"Paulo H T Freire", 26};
    printf("Nome: %s , Idade: %d\n", higor.name, higor.age);
    return 0;
}