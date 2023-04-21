#include <stdio.h>
void main()
{

    int i, j, t, a[6] = {10, 20, 30, 40, 50, 60};
    printf("enter the ele\n");
    for (i = 0; i <= 5; i++)
        printf("%d ", a[i]);
    printf("\n");
    for (i = 0, j = 3; i<3; i++, j++)
    {
        t = a[i];
        a[i] = a[j];
        a[j] = t;
    }
    for (i = 0; i <= 5; i++)  //  40,50,60,10,20,30,
        printf("%d ", a[i]);
    printf("\n");
}
