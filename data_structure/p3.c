//  sll is node add in begining




#include <stdio.h>
#include <stdlib.h>

struct st
{

    int rollno;
    struct st *next; // self ref structure   point next add
};


struct st *add_beginig(struct st *head, int);

void main()
{
    // create  1st node      head pointer

    struct st *head = malloc(sizeof(struct st)); // head pointer 1 allocated node using dma
    head->rollno = 89;                           // head pointer to data means rollno is 89// 1st node
    head->next = 0;                              // head poiter next is add is null;
    // create  2nd  node ptr pointer
    struct st *ptr = malloc(sizeof(struct st)); // 2 pointer dma allocated name is current
    ptr->rollno = 55;                           // data is 55;   // node is 2nd
    ptr->next = 0;                              
    head->next = ptr;

    ptr = head;
    ptr = add_beginig(ptr, 44);

    {
        while (ptr != NULL)
        {
            printf("-------> %d \n", ptr->rollno);
            ptr = ptr->next;
        }
    }
}

    struct st *add_beginig(struct st *head, int data)
{
    struct st *ptr = malloc(sizeof(struct st));
    ptr->rollno = data;
    ptr->next = NULL;

    ptr->next = head;
    head = ptr;
    return head;
}
