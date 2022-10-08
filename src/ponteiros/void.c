#include <stdio.h>
/*
 * Usando ponteiros genericos
 */

int main(void)
{
    void *ponteiro_generico;
    int p2 = 10;
    float p3 = 1.5;
    ponteiro_generico = &p2;
    // precisa de typecast para o tipo de ponteiro correto
    printf("Conteudo: %d\n", *(int *)ponteiro_generico);
    ponteiro_generico = &p3;
    printf("Conteudo: %.2f\n", *(float *)ponteiro_generico);
}