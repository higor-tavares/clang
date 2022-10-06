#include <stdio.h>
/*
 * Semelhante a uma struct porém em uma struct
 * é reservada memoria para todos os suas variaveis
 * enquanto uma union reserva apenas para o maior tipo
 */
union MapEntry
{
    short int value;
    unsigned char key;
};
// Em uma união somente um membro pode ser armazenado pro vez
// Pois o espaco de memoria é compartilhado
int main()
{
    union MapEntry entry;
    entry.value = 1545;
    printf("Value: %d\n Key=%d\n", entry.value, entry.key);
    entry.key = 69;
    /*
     * Como em uma union os elementos 
     * se referem ao mesmo local de memoria a
     * modifcacao dos elementos  altera os demais, 
     * numa uniao é impossivel armazenar valores idependentes
     */
    printf("Value: %d\n Key=%d\n", entry.value, entry.key);
    return 0;
}