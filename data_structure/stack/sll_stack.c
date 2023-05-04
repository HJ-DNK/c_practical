#include <stdio.h>
#include <stdlib.h>
////////////////*************** stack single_linkened list below code**************//////////////////////
struct st
{
    int rollno;
    struct st *next;
};

// top pointer

struct st *top = NULL;

void push(int); // function declaration
void print();
int pop();
// int isfull();
int isempty();
int peek();

void main()
{

    int op, data;
    while (1) // switch case user can choice the
    {
        printf("enter the option\n");
        printf("1)-->push\n  2)--->pop\n  3)-->print_top_elements\n  4)-->print_all_elements\n 5)exit\n");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            printf("enter the push data\n"); // push data
            scanf("%d", &data);
            push(data);
            break;

        case 2:
            data = pop(); // po opretion
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
            break;

        default:
            printf("pz enter the walid op\n");
        }
    }
}

void push(int data)

{
    struct st *head = malloc(sizeof(struct st)); // head pointer

    if (head == NULL)
    {
        printf("stack is full\n");
        exit(1);
    }

    head->rollno = data;
    head->next = NULL;

    head->next = top; // haed ptr poin to top
    top = head;       // top is head
}
/*
int isfull()
{
    if (top == max - 1)
        return 1;
    else
        return 0;
}*/

/////////////****pop_opration*******/////////////

int pop()
{
    if (isempty())
    {
        printf("stack is under_flow\n");
        exit(1);
    }
    struct st *temp;      // temp ptr
    temp = top;           // top is point temp;
    int v = temp->rollno; // store 1 node  in v
    top = top->next;      // top point to next node
    free(temp);           // after that  free 1 node
    temp = NULL;

    return v;
}

int isempty()
{

    if (top == NULL)
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
    return top->rollno;
}

/// ///////// print data stack //////////////

void print()
{

    struct st *temp = top;
    // printf("print the elements\n...");
    if (isempty())
    {
        printf("stack is under follow\n");
        exit(1);
    }
    printf("print the elements\n...----------->");
    while (temp != 0)
    {
        printf("%d ", temp->rollno);
        temp = temp->next;
    }
    printf("\n");
}
