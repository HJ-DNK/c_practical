#include <stdio.h>
void main()
{

    int a[2][3][3] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28};
    int i, j, k; //  3_d array
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                printf("%d ", a[i][j][k]);
            }
        }
    }
}