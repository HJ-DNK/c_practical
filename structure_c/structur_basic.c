#include <stdio.h>
struct std
{
    int rollno;
    char name[10];
    float marks;
}s1;
void main()
{
    struct std s1 = {55, "hr", 55.3};
    printf("%d %s %f\n", s1.rollno, s1.name, s1.marks);
}
