#include <stdio.h>
void main()
{

    int a = 7, b = 4, r;
    r = a & b;              // bitwise & and op = 7  & 4  = 4 
    printf("%d\n", r);
    int c = a | b;
    printf("%d\n", c);
    int e = ~a;
    printf("%d\n", e);
    int s = 7 >> 2;
    printf("%d\n", s);
    int h = 7 << 2;
    printf("%d\n", h);
}