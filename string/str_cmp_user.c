#include <stdio.h>
void main()
{
    char f[10], s[12], i;
    printf("en the 1 and 2 string\n");
    scanf("%s %s", f, s);
    for (i = 0; f[i]; i++)
    {
        if (f[i] != s[i])
            break;
       // printf("string is not equal\n");
    }
    if (f[i] == s[i])
        printf("both string same\n");
}