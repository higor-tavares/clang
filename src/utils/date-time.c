#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    time_t tims;
    struct tm *infoTime;
    char text[80];
    time(&tims);
    infoTime = localtime(&tims);
    strftime(text, 80, "Hora atual: %I:%M%p.", infoTime);
    puts(text);
    strftime(text, 80, "Data atual: %A, %d/%b/%Y", infoTime);
    puts(text);
    return 0;
}