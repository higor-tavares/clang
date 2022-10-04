#include <stdio.h>
#include <strings.h>

int main()
{
    char str[30] = "Matheus";
    printf("O nome %s possui %lu letras!\n", str, strlen(str));
}