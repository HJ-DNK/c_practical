#include <stdio.h>
void main()
{

    int i, j, k =1, r;
    printf("ent the row\n");
    scanf("%d", &r);
    for (i = 1; i <=r; i++)
    {
        for (j = 1; j <= i ; j++ , k++)
        {
            printf(" %d",k);
        }
          //  j++;
        printf("\n");
    }
}