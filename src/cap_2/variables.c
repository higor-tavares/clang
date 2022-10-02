#include <stdio.h>
#include <stdlib.h>
#define PII 3.141592

double area(int raio)
{
    return PII * raio * raio;
}
int main()
{
    const int test = 5;
    int raio;
    printf("Digite o raio do circulo: ");
    scanf("%d", &raio);
    printf("O volume do circulo de raio %d eh %.2f\n", raio, area(raio));
    printf("Minha constantante test tem valor = %d\n", test);
}