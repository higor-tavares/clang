#include <stdio.h>
#include <stdlib.h>
/*
 *  passando o endereco de memoria para uma funcao
 *  int x
 *  call(&x)
 *  na funcao ela recebe um ponteiro call(int *x)
 *  dentro da funcao *x se refere ao valor armazenado
 *  na posicao de memoria apontada
 */
void plusRef(int *number)
{
    *number = *number + 1;
    printf("Valor dentro da funcao: %d\n", *number);
}
void plusValue(int number)
{
    number++;
    printf("Valor dentro da funcao: %d\n", number);
}
int main()
{
    int x = 5;
    int y = 5;
    printf("Passagem por valor\n");
    printf("Antes da funcao: %d\n", x);
    plusValue(x);
    printf("Depois da funcao: %d\n", x);
    printf("Passagem por referencia\n");
    printf("Antes da funcao: %d\n", y);
    plusRef(&y);
    printf("Depois da funcao: %d\n", y);
    return 0;
}