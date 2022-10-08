#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int x, y;
} Point;
typedef struct
{
    char name[40];
    int age;
} Person;

int main()
{
    // using sizeof
    printf("Tamanho char: %lu\n", sizeof(char));
    printf("Tamanho int: %lu\n", sizeof(int));
    printf("Tamanho float: %lu\n", sizeof(float));
    printf("Tamanho double: %lu\n", sizeof(double));
    printf("Tamanho Point: %lu\n", sizeof(Point));
    printf("Tamanho Person: %lu\n", sizeof(Person));
    return 0;
}