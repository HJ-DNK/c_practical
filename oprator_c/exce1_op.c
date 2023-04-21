#include <stdio.h>
int fun1();
int fun2();
void main()
{
    int a;
    a = fun1() + fun2();
    printf("%d", a);
}

int fun1()
{

    printf("ok");
    return 1;
}

int fun2()
{

    printf("done");
    return 1;
}