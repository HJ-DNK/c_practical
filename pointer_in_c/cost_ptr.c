#include <stdio.h>
void main()
{

     int i=10;
    const int *p = &i;
    //*p = 20;                // this line ne error bz rezd_only pointer 
    printf("%d\n", i);
}

