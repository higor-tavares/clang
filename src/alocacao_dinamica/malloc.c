#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

#ifdef __DARWIN_NULL
#define null __DARWIN_NULL
#else
#define null NULL
#endif

int main(void)
{
    int *p;
    p = (int *)malloc(SIZE * sizeof(int));
    printf("Posicao inicial: %p\n", p);
    if (p == null)
    {
        printf("Erro: Memoria insuficiente!\n");
        exit(1);
    }
    int i;
    for (i = 0; i < SIZE; i++)
    {
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &p[i]);
    }
    return 0;
}