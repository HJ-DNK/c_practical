#include <stdio.h>
#include <string.h> //  header file string
void main()
{
    char s1[10] = "hiren", s2[10];

    // scanf("%s", s1);

     strncpy(s2,s1,3); // strcpy is string copy in to sorce to destination.
    //strcpy(s2,s1);
    printf("%s\n",s2);
}