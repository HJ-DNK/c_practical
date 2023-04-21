


// rev printing elements
#include <stdio.h>
void main()
{
    int i, j, a[5] = {10, 20, 30, 40, 50}, t;
    printf("enter the ele\n");
    for (i = 0; i < 5; i++)
        printf("%d ", a[i]);
    printf("\n");
    //  for (i = 0; i < 5; i++);
    for (i = 0, j = 5 - 1; j > i; i++, j--)
    {
        t = a[i];
        a[i] = a[j];
        a[j] = t;
    }

      for (i = 0; i < 5; i++)
    printf("%d ", a[i]);
    printf("\n");
}