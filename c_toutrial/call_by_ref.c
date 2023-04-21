#include <stdio.h>
void fun_ref(int *, int *);
void main()
{
    int a = 10, b = 20;
    fun_ref(&a, &b);

    printf("a=%d, b=%d", a, b);
}
void fun_ref(int *a, int *b)
{
    *a = 20;
    *b = 10;
}
