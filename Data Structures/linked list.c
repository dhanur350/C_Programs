#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void main()
{
    //Declare three nodes and initialize as null
    struct node *head = NULL;
    struct node *second = NULL;
    struct node *last = NULL;
    //Allocating memory
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    last = (struct node *)malloc(sizeof(struct node));
    head->data = 1;      //Adding data
    head->next = second; //Pointing to other node
    second->data = 2;
    second->next = last;
    last->data = 3;
    last->next = NULL;
    printf("%d\n", head->data);
    printf("%p", head->next);
}
/* Three blocks have been allocated dynamically.
     We have pointers to these three blocks as head,
     second and third    
       head           second           third
        |                |               |
        |                |               |
    +---+-----+     +----+----+     +----+----+
    | #  | #  |     | #  | #  |     |  # |  # |
    +---+-----+     +----+----+     +----+----+
    
   # represents any random value.
   Data is random because we haven’t assigned
   anything yet  */
/*  head->data = 1;  assign data in first node
    head->next = second;  Link first node with
     the second node
 
     data has been assigned to the data part of the first
     block (block pointed by the head). And next
     pointer of first block points to second. 
     So they both are linked.
 
       head          second         third
        |              |              |
        |              |              |
    +---+---+     +----+----+     +-----+----+
    | 1  | o----->| #  | #  |     |  #  | #  |
    +---+---+     +----+----+     +-----+----+   
  */