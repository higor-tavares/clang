#include <stdio.h>
#include <strings.h>

#define LENGTH 20

int main()
{
    char str1[LENGTH] = "Bom ";
    char str2[LENGTH] = "dia!\n";
    strcat(str1, str2);
    printf("%s", str1);
}