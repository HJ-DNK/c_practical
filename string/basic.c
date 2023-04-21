#include <stdio.h>
void main()
{
    
char s[50],i;
printf("enter the string\n");
scanf("%s",s);

//scanf("%[^\n]",s);


for(i=0;s[i];i++);
for(i=i-1;i>=0;i--)
printf("%c ",s[i]);



}