#include <stdio.h>
void main()
{
    int i = 34;
    if (i == 34) //  34==34
    {
        printf("it ture\n"); // true
    }
    if (i != 36) // 34!=36
    {
        printf("it ture\n"); // true
    }

    if (i >= 40) // 34>=40
    {
        printf("it ture\n"); // out is false
    }
}