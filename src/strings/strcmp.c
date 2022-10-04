#include <stdio.h>
#include <strings.h>

int main()
{
    char str1[100], str2[100];
    printf("Entre com o primeiro nome: ");
    gets(str1);
    printf("Entre com o segundo nome: ");
    gets(str2);
    if (strcmp(str1, str2) == 0)
    {
        printf("Strings iguais!\n");
    }
    else
    {
        printf("Strings diferentes!\n");
    }
    return 0;
}