
#include <stdio.h>
int add(int *, int *);

int main()
{
    int a;

    scanf("%d", &a);

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= a - i; j++)
        {
            printf(" ");
        }

        for (int k = a - i; k < a; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}