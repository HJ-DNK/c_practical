#include <stdio.h>
void main()
{
    int sum, num, r; // this cheking the armstrong number 153 =1+125+27=153;

    printf("en th num\n");
    scanf("%d", &num);
    int num1 = num;                         // store num1;
    for (sum = 0; num != 0; num = num / 10) //
    {
        r = num % 10;            // 121 % 10=1 so taking number last number
        sum = sum + (r * r * r); // 153 is  3*3*3=27   0+27=27; 27+125  ...
    }
    if (sum == num1) // 153==153   condtion true
        printf("yes armstong");

    else

        printf("not\n");
}