#include <stdio.h>
#include <stdlib.h>
// Create an alias to an existin type
typedef int integger;

int main()
{
    integger num1, num2;
    num1 = 100;
    num2 = 35;
    printf("N1: %d N2: %d\n", num1, num2);
    return 0;
}
