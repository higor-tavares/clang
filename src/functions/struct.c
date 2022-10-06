#include <stdio.h>

typedef struct
{
    int x, y;
} Point;
void print(Point p)
{
    printf("x = %d\n", p.x);
    printf("y = %d\n", p.y);
}
int main(void)
{
    Point point = {2, 5};
    print(point);
    return 0;
}