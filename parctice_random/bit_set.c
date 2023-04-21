#include <stdio.h>
void main()
{
    int n, pos;
    printf("enter the nuber and pos\n");
    scanf("%d  %d", &n, &pos);
    // n = n | 1 << pos;
   // n = n | 1 << pos;      // set bit particular
    n = n & ~(1 << pos);   // claer bit 
    //n = n ^ 1 << pos;     // toggle the bit.

    printf("n=%d\n", n);
}