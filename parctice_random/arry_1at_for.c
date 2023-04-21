#include <stdio.h>
void main()
{

    int i, t, a[6] = {10, 20, 30, 40, 50, 60};
    printf("enter the ele\n");
    for (i = 0; i <= 5; i++)
        printf("%d ", a[i]);
    printf("\n");
    for (i = 0; i <= 5; i = i + 2)
    {

        t = a[i + 1];
        a[i + 1] = a[i];
        a[i] = t;
    }

    for (i = 0; i <= 5; i++)       // 20,10,40,30,60,50
        printf("%d ", a[i]);
    printf("\n");
}