#include <stdio.h>
#include <stdlib.h>
#define max 4
//////////////////////*********** stack_in_array_**********///////////////

void push(int);
int pop();
void print();
int isfull();
int isempty();
int peek();

int stck_arry[max];
int top = -1; // stack -1 means is stack is empaty
void main()
{

    int op, data;
    while (1)
    {
        printf("enter the option\n");
        printf("1)-->push\n  2)--->pop\n  3)-->print_top_elements\n  4)-->print_all_elements\n 5)exit\n");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            printf("enter the push data\n");
            scanf("%d", &data);
            push(data);
            break;

        case 2:
            data = pop();
            printf("delet the data-------> %d\n", data);
            break;

        case 3:
            printf("top the elements------> %d\n", peek());
            break;
        case 4:
            print();
            break;
        case 5:
            exit(1);
        default:
            printf("pz enter the walid op\n");
        }
    }
}
////////***********push_oprartion************///////

void push(int data)
{
    if (isfull())
    {
        printf("stack is overflow\n");
        return;
    }
    top = top + 1;
    stck_arry[top] = data;
}

int isfull()
{
    if (top == max - 1)
        return 1;
    else
        return 0;
}
/////////////****pop_opration*******/////////////

int pop()
{
    if (isempty())
    {
        printf("stack is under_flow\n");
        exit(1);
    }
    int v;
    v = stck_arry[top];
    top = top - 1;
    return v;
}

int isempty()
{

    if (top == -1)
        return 1;
    else
        return 0;
}

int peek()
{
    if (isempty())
    {
        printf("stack is under_flow\n");
        exit(1);
    }
    return stck_arry[top];
}

void print()
{
    if (top == -1)
    {
        printf("stack under_flow\n");
        return;
    }
    int i;
    for (i = top; i >= 0; i--)
    {
        printf("---->%d", stck_arry[i]);
        printf("\n");
    }
}
