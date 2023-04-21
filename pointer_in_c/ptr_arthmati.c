#include<stdio.h>
void main()
{
int i=10;
int *p=&i;

printf("%d\n",*(p+3));  //un-behaviour output bz  only int

}