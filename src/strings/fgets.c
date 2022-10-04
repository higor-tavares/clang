#include <stdio.h>
#include <stdlib.h>
#define SIZE 45

int main()
{
    char name[SIZE];
    printf("What is your name?\n");
    // stdin is user input
    // fgets read the \n char
    fgets(name, SIZE, stdin); // gets & fgets are used to read a sring with spaces
    printf("Hi, %s My name is computer!\n", name);
    return 0;
}

    