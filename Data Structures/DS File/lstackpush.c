#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *ptr;
}*top,*top1,*temp;
int count = 0;
void display();
void create();
void push(int data);
void main()
{
    int no, ch, e;
    while (1)
    {
        printf("\n 1 - Push \n 2 - Display \n Any number for - Exit");
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
            display();
            break;
        default :
            printf(" Okay  "); exit(0);
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