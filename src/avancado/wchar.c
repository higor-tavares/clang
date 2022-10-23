#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    wchar_t caractere = L'\u00A9';
    wchar_t text[30] = L"Meu caractere longo = \u00F1";
    wprintf(L"Marca registrada: \u00A9 ou \u00AE\n");
    wprintf(L"Caractere: %lc \n",caractere);
    wprintf(L"%ls\n",text);
    return 0;
}