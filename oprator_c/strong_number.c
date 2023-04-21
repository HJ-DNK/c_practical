
// this pograme is find factoraial

#include <stdio.h>
void main()
{
    int num, r = 1, i,sum=0;
    printf("en the num\n");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    { int  s=num%10;

        r = s+ r * i;
    }
    printf("fact =%d\n", r);

    if(r==num)
    printf(" yes is strong num\n ");
    else
    printf("no strong number\n");
}
