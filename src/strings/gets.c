#include <stdio.h>
#define SIZE 45
int main()
{
    char name[SIZE];
    printf("Hello boy my name is Sol, what is your name?\n");
    gets(name);
    printf("Eita cara, fala ai %s como vai?\n", name);
}