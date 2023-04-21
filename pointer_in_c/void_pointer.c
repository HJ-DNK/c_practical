#include <stdio.h>
void main()
{
    int i = 10;
    char ch = 'h';
    float f = 2.3;

    void *p; // this is pograming of void pointer it hole the any type...
    p = &i;
    printf("%d\n", *(int *)p); // typecasting int

    p = &ch;
    printf("%c\n", *(char *)p); //  char typecasting
    p = &f;
    printf("%f\n", *(float *)p);
}