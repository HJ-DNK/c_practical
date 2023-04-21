#include<stdio.h>
void fun();             
int i=30;                 // gloable variable 
void main()
{
    int i=10;            // decalaration
    printf("i=%d\n",i); //local variable out is 10;
    fun();              // function call;
}
void fun()
{
    printf("i=%d\n",i); // gloable variable out is 30

}