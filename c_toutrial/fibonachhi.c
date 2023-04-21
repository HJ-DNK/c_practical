#include <stdio.h>
void main()
{
    int num, a = 0, c, b=1,i;
    printf("en the num\n");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        printf("%d ", a);
    
        c = a + b;
        a = b;
        b = c;
    }
}