#include <stdio.h>
#include <stdlib.h>

struct st
{
    int rollno;
    struct st *next;
};



void add_pos(struct st *head,int,int);




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



int data=69;
add_pos(head,data,2);



    struct st *ptr = malloc(sizeof(struct st));
    ptr = head;
    while (ptr != NULL)
    {
        printf("----->%d \n", ptr->rollno);
    
    ptr=ptr->next;
    }
}


////////////////////*****node_add_pos_2*****///////////////////


void add_pos(struct st *head,int data,int pos)
{

 struct st *ptr=head;           // ptr point to head
struct st *ptr2 = malloc(sizeof(struct st));//  node is  created
ptr2->rollno=data;
ptr2->next=NULL;
pos--;
while(pos!=1)
{
ptr=ptr->next;
pos--;
}
ptr2->next=ptr->next;           // link node next add
ptr->next=ptr2;                  // 



}






