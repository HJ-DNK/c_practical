#include <stdio.h>
#include <string.h>
void main()
{
    char s1[10] = "hiren", s2[10] = "jadav";
    strcat(s1, s2);             //  strcat is use of string move s2 to s1 end of string.
    printf("%s\n", s1);
}