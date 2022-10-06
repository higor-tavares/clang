#include <stdio.h>

typedef struct
{
    int x, y;
} Point;

void setY(Point *p, int value)
{
    //*p é o ponteiro se tivessemos *p.x por que o operador ponto tem prioridade
    // a variavel x seria o ponteiro
    (*p).y = value;
}
void setX(Point *p, int value)
{
    (*p).x = value;
}
int main(void)
{
    Point p = {};
    printf("Ponto x = %d y = %d \n", p.x, p.y);
    setX(&p, 5);
    setY(&p, 2);
    printf("Ponto x = %d y = %d \n", p.x, p.y);
    return 0;
}