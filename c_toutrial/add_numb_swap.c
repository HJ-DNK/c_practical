#include <stdio.h>
void main()
{
    int t, a = 10, b = 20;
    {
        printf("%d  %d\n", a, b);
        a = a + b;
        b = a - b;
        a = a - b;
    }
    printf("%d  %d\n", a, b);
}