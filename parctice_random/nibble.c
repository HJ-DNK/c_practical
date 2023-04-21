#include<stdio.h>
void main()
{
unsigned char ch =100;
int r=(ch&0xf0)>>4|(ch&0x0f)<<4;
printf("r=%d\n",r);



}