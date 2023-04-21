#include <stdio.h>
void main()
{

    int a = 5;
    if (a == 5 && a != 6 && a <= 56) // true  and opreation
        printf("%d\n", a);
    if (a != 5 || a == 6 || a >= 55) // flase or opreation
        printf("true\n");

    int c = 5, b = 3;
    ((c > b) && (b++));
    printf("c=%d b=%d\n", c, b);

    int d = 5, e = 3;
    ((d > e) || (b++));
    printf("d=%d e=%d\n", d, e);
}