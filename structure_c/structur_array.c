#include <stdio.h>
#include <stdlib.h>
struct st
{
    int rollno;
    char name[20];
    float marks;
};
void main()
{
    struct st s[3];
    for (int i = 0; i < 3; i++)
    {
        printf("en the rollno\n");
        scanf("%d", &s[i].rollno);
        printf("en the name\n");
        scanf("%s", s[i].name);
        printf("en the marks\n");
        scanf("%f", &s[i].marks);
    }
    for (int i = 0; i < 3; i++)
        printf("%d %s %f\n", s[i].rollno, s[i].name, s[i].marks);
}