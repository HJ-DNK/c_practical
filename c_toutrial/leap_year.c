#include <stdio.h>
void main()   
{
    int year;
    printf("en the year\n");     // leap year  
    scanf("%d", &year);           
    if (year % 400 == 0)            
        printf("it  is leap year\n");
    else if (year % 100 == 0)
        printf("it  is not year\n");

    else if (year % 4 == 0)
        printf("it  is leap year\n");
    else
        printf("not leap yaear");
}