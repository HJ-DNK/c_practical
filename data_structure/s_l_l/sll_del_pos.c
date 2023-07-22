#include <stdio.h>
#include <stdlib.h>

struct st
{
    int rollno;
    struct st *next;
};


void del_pos(struct st *head, int);

void main()
{

    struct st *head = malloc(sizeof(struct st));
    head->rollno = 52;
    head->next = NULL;

    struct st *current = malloc(sizeof(struct st));
    current->rollno = 88;
    current->next = NULL;

    head->next = current;

    current = malloc(sizeof(struct st));
    current->rollno = 44;
    current->next = NULL;

    head->next->next = current;

    //    delet_last_node(head);
    int pos = 2;
    del_pos(head, pos);





    struct st *ptr = malloc(sizeof(struct st));
    ptr = head;
    while (ptr != NULL)
    {
        printf("----- >%d \n", ptr->rollno);

        ptr = ptr->next;
    }
}



/////////************** delete node  2nd pos**********////////




void del_pos(struct st *head, int pos)
{

    struct st *prv = head;
        struct st *current = head;
    if (head == NULL)
        printf("node is empty\n");
    else
    {
        while (pos != 1)
        {
            prv= current;
            current = current->next;
            pos--;
        }
        prv->next = current->next;
        free(current);
        current = NULL;
    }
}
