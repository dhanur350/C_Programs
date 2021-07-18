#include <stdio.h>
#include <stdlib.h>
 
struct node
{
    int info;
    struct node *ptr;
}*top,*top1,*temp;

void push(int data);
void pop();
void display();
void create();
 
int count = 0;
void main()
{
    int no, ch, e;
    while (1)
    {
        printf("\n 1 - Push \n 2 - Pop \n 3 - Display \n 4 - Exit");
        printf("\n Enter choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter data : ");
            scanf("%d", &no);
            push(no);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default :
            printf(" Wrong choice, Please enter correct choice  ");
            break;
        }
    }
}
 
/* Push data into stack */
void push(int data)
{
    if (top == NULL)
    {
        top =(struct node *)malloc(1*sizeof(struct node));
        top->ptr = NULL;
        top->info = data;
    }
    else
    {
        temp =(struct node *)malloc(1*sizeof(struct node));
        temp->ptr = top;
        temp->info = data;
        top = temp;
    }
    count++;
}
 
/* Display stack elements */
void display()
{
    top1 = top;
 
    if (top1 == NULL)
    {
        printf("Stack is empty");
        return;
    }
 
    while (top1 != NULL)
    {
        printf("|-----|");
        printf("\n|  %d  |\n", top1->info);
        top1 = top1->ptr;
    }
 }
 
/* Pop Operation on stack */
void pop()
{
    if (top == NULL)
        printf("\n Stack is empty");
    top1 = top;
    if (top1 == NULL)
    {
        printf("\n Error : Stack is underflow ");
        return;
    }
    else
        top1 = top1->ptr;
    printf("\n Popped value :|__%d__|", top->info);
    free(top);
    top = top1;
    count--; //4 - 1 = 3
}