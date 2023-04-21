#include <stdio.h>
void main()
{
    int n, k, j, i;
    printf("enter the num \n");
    scanf("%d", &n);
    for (i = 0; i <n; i++)
    {
        for (j = n; j >i; j--)
        {
            printf(" ");
        }
        for (k = 0; k <i*2+1; k++)
        {

            printf("*");
        }
        printf("\n");
    }
}