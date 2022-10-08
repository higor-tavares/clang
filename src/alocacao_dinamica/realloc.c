#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, *p = (int *)calloc(5, sizeof(int));
    printf("Enderco de memoria: %p\n", p);
    for (i = 0; i < 5; i++)
    {
        p[i] = i + 1;
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", p[i]);
    }
    printf("\n");
    // Diminui o tamanho do array
    p = realloc(p, 3 * sizeof(int));
    printf("Enderco de memoria: %p\n", p);
    for (i = 0; i < 3; i++)
    {
        printf("%d\n", p[i]);
    }
    printf("\n");
    // Aumenta o tamanho do array
    p = realloc(p, 10 * sizeof(int));
    printf("Enderco de memoria: %p\n", p);
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", p[i]);
    }
    return 0;
}