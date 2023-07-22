#include <stdio.h>
#include <stdlib.h>

struct st
{
    int rollno;
    struct st *next;
};

// struct st *delet_node(struct st *head);

void delet_last_node(struct st *head);

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

    delet_last_node(head);

    struct st *ptr = malloc(sizeof(struct st));
    ptr = head;
    while (ptr != NULL)
    {
        printf("----- >%d \n", ptr->rollno);

        ptr = ptr->next;
    }
}

//// ********************* delete the last node ****************///////

void delet_last_node(struct st *head)
{

    if (head == NULL)
        printf("node is ementy\n");
    else if (head->next == NULL)
    {
        free(head);
        head = NULL;
    }

    else
    {
        struct st *temp = head; // temp pointer point to head;
        while (temp->next->next != NULL)
        {

            temp = temp->next;
        }

        free(temp->next); // last node will delete
        temp->next = NULL;
    }
}
