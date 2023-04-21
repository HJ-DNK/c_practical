#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n, *p, i;
    printf("enter the number\n");
    scanf("%d", &n);
    p = malloc(sizeof(int) * n);

    for (i = 0; i < n; i++)
        scanf("%d", &p[i]);
    for (i = 0; i < n; i++)
        printf(" %d", p[i]);
}