#include <stdio.h>
void main()
{

    int sum, num, r;
    printf("en th num\n");
    scanf("%d", &num);
    int num1 = num;                         // num1=121;
    for (sum = 0; num != 0; num = num / 10) //
    {
        r = num % 10; // 121 % 10=1 so taking number last number
        sum = sum * 10 + r;
    }
    if (sum == num1)
        printf("num=%d\n  yes palidrom number", num);

    else

        printf("not\n");
}
