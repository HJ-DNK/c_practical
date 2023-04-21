// structure pointer student data using student data;

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
    struct st *p[3];
    for (int i = 0; i < 3; i++)
        p[i] = malloc(sizeof(struct st));
    for (int i = 0; i < 3; i++)
    {
        printf("en the rollno\n");
        scanf("%d", &p[i]->rollno);
        printf("en the name\n");
        scanf("%s", p[i]->name);

        printf("en the marks\n");
        scanf("%f", &p[i]->marks);
    }
    for (int i = 0; i < 3; i++)
        printf("%d %s %f\n", p[i]->rollno, p[i]->name, p[i]->marks);
}