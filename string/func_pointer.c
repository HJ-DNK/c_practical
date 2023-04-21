#include <stdio.h>
int add(int, int);
void main()
{ // this pogrsme is function pointer
    int a = 20, b = 30;
    int (*p)(int, int) = &add; //   hear p is fun pointer which is 2 argruments it return int
    // p = &add;
    int r = (*p)(a, b);
    printf("%d\n", r);
}
int add(int a, int b) // fun defination
{
    return a + b;
}