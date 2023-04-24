#include <stdio.h>
void main()
{

    int a[5] = {1, 2, 3, 4, 5};
    int ind;
    printf("en the index\n");
    scanf("%d", &ind);
    for (int i = ind; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
}