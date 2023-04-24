#include <stdio.h>
void main()
{
    int a[2][3] = {{10, 20, 30}, {40, 50, 60}};    // 2D array inillation and printt elements
    int i, j, k,sum=0;

    for (i = 0; i < 2; i++)     
    {
        for (j = 0; j < 3; j++)
        {
            sum=sum+a[i][j];
        }

            printf("%d ", sum);
        
    }
}