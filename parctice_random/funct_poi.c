#include <stdio.h>
int even(int);
void main()
{
    int n;
    printf("enter the num\n");
    scanf("%d", &n);
    int (*p)(int) = &even;
    int m = (*p)(n);
   // printf("m=%d\n", m);

    // printf(" %d\n", m);
}

int even(int n)
{
    int r;
    if (n % 2 == 0)
        printf("even %d\n", n * n);
    else
        printf("odd=%d\n", n * n * n);
}