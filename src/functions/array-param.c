#include <stdio.h>

void print(int *array, int size)
{
    int count;
    for (count = 0; count < size; count++)
    {
        printf("%d\n", array[count]);
    }
}
int main(void)
{
    int vector[5] = {10, 8, 9, 7, 6};
    print(vector, 5);
    return 0;
}