#include <stdio.h>
#include <stdlib.h>
/// ////////////////////******************* sll_queue*********///////////////////////////
struct st
{
    int rollno;
    struct st *next;
};

void enqeue(int);
void display();
void dequeu();

void peek();
/// //////////*********************************/////////////////////////
struct st *front = 0;
struct st *real = 0;

void main()
{
    enqeue(15);
    enqeue(88);

    enqeue(10);
    display();
    dequeu();
    display();
    peek();
}
/////////////***********insert_data***********///////////
void enqeue(int x)
{
    struct st *newnode = malloc(sizeof(struct st)); // neewnode dma allocatened
    newnode->rollno = x;                            // newnode data put;
    newnode->next = 0;                              // newnode next is 0;
    if (front == 0 && real == 0)                    // if f and r point to 0 so f and r is poit newnode;
    {

        front = real = newnode;
    }
    else
    { // real is point other next node
        real->next = newnode;
        real = newnode; // real is newnode;
    }
}

/////////////********print_data*******///////////////

void display()
{
    struct st *teamp = front;
    if (front == 0 && real == 0)
    {
        printf("quequ is empty\n");
    }
    else
    {
        while (teamp != 0)
        {
            printf("%d \n", teamp->rollno);
            teamp = teamp->next;
        }
        printf("\n");
    }
}

void dequeu()
{
    if (front == 0 && real == 0)
    {
        printf("quequ is empty\n");
    }
    else
    {
        struct st *temp = front;
        printf("-delete the data ---->%d\n", front->rollno);
        front = front->next;
        free(temp);
        temp = NULL;
    }
}

void peek()
{
    if (front == 0 && real == 0)
    {
        printf("quequ is empty\n");
    }

    else
    {
        printf("peek the data-->%d\n", front->rollno);
    }
}