#include <stdio.h>

char a[] = "ab  bc cd de ef fg";
char b[20]  ;
void main(void)
{

   for(int i = 0  , j =0;i<= 20;i++)
   {
         if(a[i] == ' ')
         {
            continue;
         
         }
        ++j;
        b[j] = a[i];
        //j++;
        
        //printf("%c",arrc[j]);
   }
  
   printf("%s",b);    
}