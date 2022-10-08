#include <stdio.h>

int main()
{
    int vet[5] = {1, 2, 3, 4, 5};
    int *p, indice = 2;
    p = vet;
    printf("%d\n", *p);
    printf("%d\n", vet[0]);
    printf("%d\n", vet[indice]);
    printf("%d\n", *(p + indice));
    printf("%p\n", vet);
    printf("%p\n", &vet[0]);
    printf("%p\n", p);
    printf("%p\n", p + indice);
    printf("%p\n", &vet[indice]);
    return 0;
}