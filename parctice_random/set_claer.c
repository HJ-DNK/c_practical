#include <stdio.h>
void main()
{
    int a[5], ele, i, j, t;
    printf("enter th elements\n");
    ele = sizeof(a) / sizeof(a[0]);
    for (i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < ele - 1; i++)
    {
        for (j = 0; j < ele - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
    for (i = 0; i < 5; i++)
        printf("%d ", a[i]);
    printf("\n");
}