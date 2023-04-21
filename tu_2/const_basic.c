#include<stdio.h>
#define add(x,y) x+y  // defined is pre-precssor dirctly  also call macro
void main()
{
printf("%d\n",5*add(6,3));  // first will be out is  5*6=30+3=33
printf("%s\n",__DATE__);  // pre-defined include date and time


}