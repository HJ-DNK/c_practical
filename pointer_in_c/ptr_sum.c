#include <stdio.h>
void main()/*
{
    int a[5] = {10, 20, 30, 40, 50};
    int *p=a, sum = 0;

    for (int i = 0; i < 5; i++)
    {
        sum = sum + *p;
        p++;
    }

    printf("%d", sum);
}
*/
{
    int a[5] = {10, 20, 30, 40, 50};
    int *p, sum = 0;

    for (p= a; p<=a+4; p++)
    {
        sum = sum + *p;
    
    }

    printf("%d", sum);
}