#include <stdio.h>
int *fun(void);
void main()
{

    int *p = fun();
    printf("*p=%d\n", *P);
}

int *fun(void)
{
    int i = 20;
    return (&i);
}