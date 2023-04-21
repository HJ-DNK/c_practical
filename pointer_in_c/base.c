#include <stdio.h>
void main()
{
    int i = 10;
    int *p =&i;
    *p =30;

    printf("%d", i);
}