#include <stdio.h>
void main()
{
    int n, k, j, i;
    printf("enter the num \n");
    scanf("%d", &n);
    for (i = 1; i <=n; i++)
    {
        for (j = 1; j <=n - i; j++)
        {
            printf(" ");
        }
        for (k = n - i; k <= 2*i-1; k++)
        {

            printf("*");
        }
        printf("\n");
    }
}