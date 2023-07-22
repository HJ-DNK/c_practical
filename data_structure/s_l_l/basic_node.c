#include <stdio.h>
#include <stdlib.h>
//////////////////*******basic_node_sll*********/////////////

struct st
{

    int rollno;
    struct st *next; // self_ref struct
};
void main()
{

    struct st *head = NULL;           // head point to null
    head = malloc(sizeof(struct st)); // head dma allocated

    head->rollno = 90;          // data is put it
    head->next = NULL;          // address is null
    printf("%d", head->rollno); // print _data
}