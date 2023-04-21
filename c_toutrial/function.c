#include <stdio.h>
int add(int, int); // function prototype
void main()
{
    int a = 10, b = 20;
    int r = add(a, b); // fun call or actual parametr
    printf("r=%d\n", r);
}

int add(int a, int b) //  fun defination   formal argument
{
    return a + b;
}