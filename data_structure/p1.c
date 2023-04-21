// ex  is create 3 node

#include <stdio.h>
#include <stdlib.h>

struct st
{

    int rollno;
    struct st *next; // self ref structure   point next add
};

void count_node(struct st *head);
void print_data(struct st *head);
void node_end(struct st *head, int);

void main()
{
    // create head pointer

    struct st *head = malloc(sizeof(struct st)); // head pointer 1 allocated node using dma
    head->rollno = 89;                           // head pointer to data means rollno is 89// 1st node
    head->next = 0;                              // head poiter next is add is null;
    // create current  pointer
    struct st *current = malloc(sizeof(struct st)); // 2 pointer dma allocated name is current
    current->rollno = 55;                           // data is 55;   // node is 2nd
    current->next = 0;                              // add neaxt is 0;
    head->next = current;                           // head pointer point to 2nd node add


    current = malloc(sizeof(struct st));
    current->rollno = 45;
    current->next = 0;

    head->next->next = current;   // 

    // printf("%d\n", head->next->next->rollno);

      
    // print_data(head);
    node_end(head, 99);
    node_end(head, 65);
    count_node(head);


    struct st *ptr = malloc(sizeof(struct st));
    ptr = head;
    while (ptr != NULL)
    {
        printf("-------> %d \n", ptr->rollno);
        ptr = ptr->next;
    }
}

//     count number of node

void count_node(struct st *head)
{
    struct st *ptr = head;
    int count = 0;
    if (ptr == 0) // node no record found
    {
        printf("no record found \n");
    }


    while (ptr != 0) // each node is count
    {
        count++;
        ptr = ptr->next;
    }

    printf("node count is =%d\n", count);
}


// print_data node

/*
void print_data(struct st *head)
{
    struct st *ptr = head;     // point to head
    if (ptr == 0)
        printf("no record found\n");
    while (ptr != 0)
    {
        printf("data is %d\n", ptr->rollno);
        ptr = ptr->next;
    }
}*/

// node end_



void node_end(struct st *head, int data)
{
    struct st *ptr = head, *temp;     // to end temp pointer to add
    temp = malloc(sizeof(struct st)); //  dma
    temp->rollno = data;              // put data;
    temp->next = NULL;                // put 0;
    while (ptr->next != NULL)         // condtion to check null up to end
    {

        ptr = ptr->next; // point to 1 2 3
    }
    ptr->next = temp; // link to 4 node node 3
}
