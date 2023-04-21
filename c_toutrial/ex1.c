#include <stdio.h>
char *str_cmp(const char *,const char *);
void main()
{
    char s1[10], s2[20], i, *p;
    printf("ent the 1 and 2 string\n");
    scanf("%s %s", s1, s2);
    p = str_cmp(s1, s2);
    if (p == 0)
        printf("not match\n");
    else
        printf("both string is match\n");
}

    char *str_cmp(const char *p, const char *q)
    {
            int i;
        for (p = 0; p[i]; p++)
        {
            if (p[i] != q[i])
                break;
        }
        if (p[i] == q[i])
            return p;

        else
            return 0;
    }