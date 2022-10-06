#include <stdio.h>

void print_matriz(int matriz[][2], int size)
{
    int i, j;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d \n", matriz[i][j]);
        }
    }
}

int main(void)
{
    int mat[3][2] = {{1, 2}, {3, 4}, {5, 6}};
    print_matriz(mat, 3);
    return 0;
}