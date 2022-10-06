#include <stdio.h>

typedef struct
{
    int x, y;
} Point;

void setY(Point *p, int y)
{
    p->y = y;
}
void setX(Point *p, int x)
{
    // p->x é equivalente a (*p).x
    p->x = x;
}
int main(void)
{
    Point p = {1, 1};
    printf("Ponto x = %d y = %d \n", p.x, p.y);
    setX(&p, 5);
    setY(&p, 2);
    printf("Ponto x = %d y = %d \n", p.x, p.y);
}