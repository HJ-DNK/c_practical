#include <stdio.h>
typedef struct st
{
    int rollno;
    char name[10];
    float marks;
} s1;
void main()
{

    s1 a1 = {44, "hiren", 2.3};
    printf("%d %s %f \n", a1.rollno, a1.name, a1.marks);
}