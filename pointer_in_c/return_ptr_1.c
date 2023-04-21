#include <stdio.h>
int *fun(int *, int); // this pograme is return the pointer
void main()
{
    int a[] = {10, 20, 30, 40, 50}, ele;
    ele = sizeof(a) / sizeof(a[0]); // size of array
    int *r = fun(a, ele);           // fun call
    printf("*r=%d\n", *r);          //  a[2]= 30;
}
int *fun(int *a, int ele)
{

    return &a[2]; // return add is a[2]= so out pu is .
}
