#include <stdio.h>
int main()
{
    char text[30] = "Hello world\n";
    fputs(text, stdout);
    return 0;
}