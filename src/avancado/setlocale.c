#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(){
    float f = 3.45;
    time_t tempo;
    struct tm *infotempo;
    char texto[80];
    time(&tempo);
    infotempo = localtime(&tempo);
    printf("Alô mundo!\n");
    printf("Valor de f = %.2f\n",f);
    strftime(texto, 80, "Data: %A, %d/%b/%Y",infotempo);
    puts(texto);
    setlocale(LC_ALL, "pt_BR");
    printf("Alô mundo!\n");
    printf("Valor de f = %.2f\n",f);
    strftime(texto, 80, "Data: %A, %d/%b/%Y",infotempo);
    puts(texto);
    return 0;
}