#include <stdio.h>

struct address
{
    char street[30];
    int number;
};

struct person
{
    char name[45];
    int age;
    struct address addr;
};

int main()
{
    struct person p1 = {"Paulo Freire", 26, {"Rua Alberto Magno", 2005}};
    struct person p2;
    p2 = p1;
    printf("\nName: %s , Age: %d, Address: %s, %d\n", p2.name, p2.age, p2.addr.street, p2.addr.number);
}