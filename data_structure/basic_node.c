#include <stdio.h>
#include <stdlib.h>
struct st
{

    int rollno;
    struct st *next;
};
void main()
{

    struct st *head = NULL;
    head = malloc(sizeof(struct st));

    head->rollno = 90;
    head->next = NULL;
    printf("%d", head->rollno);
}