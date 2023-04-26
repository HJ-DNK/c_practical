#include <stdio.h>
#include <stdlib.h>

struct st
{
    int rollno;
    struct st *next;
};

// void add_pos(struct st *head,int,int);

struct st *delet_node(struct st *head);



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

    // int data=69;
    // add_pos(head,data,2);
    head = delet_node(head);

    struct st *ptr = malloc(sizeof(struct st));
    ptr = head;
    while (ptr != NULL)
    {
        printf("----->%d \n", ptr->rollno);

        ptr = ptr->next;
    }
}



//*************** first node is delelt*************************//

struct st *delet_node(struct st *head)
{
    if (head == 0)
        printf("node is empty\n");
    else
    {
        struct st *temp = head;

        head = head->next;
        free(temp);
        temp = NULL;
    }
    return head;
}
