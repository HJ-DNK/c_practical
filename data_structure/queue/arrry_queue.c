#include <stdio.h>
#include <stdlib.h>
#define N 8
///////////************arry_in_queue*************////////

int queue[N];
int real = -1;
int front = -1;

void enqueue(int);
void dequeu();
void display();
void peek();

void main()
{

    enqueue(5);
    enqueue(22);
    enqueue(10);

    enqueue(88);
    enqueue(25);
    enqueue(44);

    dequeu();
    dequeu();
    peek();
    display();
}

//////////*******insert_dat******?////////////

void enqueue(int x)
{
    if (real == N - 1)
    {
        printf("queue is over flow\n");
    }
    else if (front == -1 && real == -1)
    {
        front = real = 0;
        queue[real] = x;
    }
    else
    {
        real++;
        queue[real] = x;
    }
}

////////***********delete_queue_************/////

void dequeu()
{
    if (front == -1 && real == -1) // both are -1 so empty
    {
        printf("queue is empty\n");
    }
    else if (real == front) // both same and delete last elments front and real is -1;
    {
        front = real = -1;
    }
    else
    {
        printf("--dequeu_is-->%d\n", queue[front]);
        front++; //  delte so move above pos
    }
}

/////////////////******* dispaly queu**********///////////////

void display()
{
    if (front == -1 && real == -1) // both are -1 so empty
    {
        printf("queue is empty\n");
    }

    else
    {
        int i;
        for (i = front; i < real + 1; i++) // printf data
        {
            printf("%d\n", queue[i]);
        }
    }
}

void peek()
{

    if (front == -1 && real == -1) // both are -1 so empty
    {
        printf("queue is empty\n");
    }
    else
    {
        printf("----->%d\n", queue[front]);
    }
}