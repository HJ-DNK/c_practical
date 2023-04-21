#include<stdio.h>
int i=30;           // golabel variable
void main()
{
{
int i=10;           // this LOCAL variable
printf("local var=%d\n",i); //  out is 10
}
printf("golable var=%d\n",i); // out is 30
}