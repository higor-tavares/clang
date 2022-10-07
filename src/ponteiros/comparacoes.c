#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p1, *p2, x, y;
    x = 10;
    y = 20;
    p1 = &x;
    p2 = &y;
    if (p1 > p2)
    {
        printf("p1 %p esta numa posicao maior que p2 %p\n", p1, p2);
    }
    else
    {
        printf("p1 %p esta numa posicao menor que p2 %p\n", p1, p2);
    }
    if (*p1 > *p2)
    {
        printf("O conteúdo de p1 %d eh maior que o de p2 %d\n", *p1, *p2);
    }
    else
    {
        printf("O conteúdo de p1 %d eh menor que o de p2 %d\n", *p1, *p2);
    }
    return 0;
}