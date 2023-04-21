#include <stdio.h>
int sum(int, int);
int sub(int,int);
void main()
{
    int x = 10, y = 3;
    int (*p)(int, int) = sub;
    int r = (*p)(x, y);
    printf("r=%d\n", r);
}
int sum(int a, int b)
{

    return a + b;
}
int sub(int a, int b)
{

    return a -b;
}