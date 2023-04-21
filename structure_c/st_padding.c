#include <stdio.h>
#pragma pack(1)         
struct st
{
    int j;
   char b;
   float f;
   double k;
};
void main()
{

    struct st v;
    printf("%ld\n", sizeof(v));
}