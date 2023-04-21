#include <stdio.h>
int fact(int);
void main()
{
    int num;
    printf("en the num\n");
    scanf("%d", &num);
    int r = fact(num);
    printf("%d\n", r);
}
int fact(int num)
{
    if (num)
        return  num * fact(num - 1);
    else
        return 0;
}