#include <stdio.h>
#include <strings.h>

struct person
{
    char name[45];
    short int age;
};

int main()
{
    struct person higor, duda;
    strcpy(higor.name, "Paulo H T Freire");
    higor.age = 26;
    printf("Qual o nome completo da duda?\n");
    gets(duda.name);
    printf("Qual a idade da duda?\n");
    scanf("%hd", &duda.age);
    printf("Nome: %s , Idade: %d\n", higor.name, higor.age);
    printf("Nome: %s , Idade: %d\n", duda.name, duda.age);
    return 0;
}