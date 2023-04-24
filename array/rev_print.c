#include <stdio.h>
void main()                 // this is ex of rev the elements
{
    int a[5] = {10, 20, 30, 40, 50}, i;
    for (i = 0; i < 5; i++)
        printf("%d ", a[i]);
    printf("\n");
    for (i = 0; i < 5; i++);
    for (i = i - 1; i >= 0; i--)   
        printf("%d ", a[i]);
    printf("\n");
}