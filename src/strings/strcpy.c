#include <stdio.h>
#include <strings.h>

#define SIZE 100

int main()
{
    char n1[SIZE], n2[SIZE];
    printf("Escreva uma sring: ");
    gets(n1);
    printf("n1 = %s, n2 = %s\n", n1, n2);
    // destination, origin
    strcpy(n2, n1);
    printf("n1 = %s , n2 = %s (2)\n", n1, n2);
    return 0;
}