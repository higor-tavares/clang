#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x, *p;
    x = 10;
    p = &x;
    printf("O valor apontado por p = %d\n", *p);
    *p = 12;
    printf("O valor de x = %d\n", x);
    return 0;
}