#include <stdio.h>
#include <stdlib.h>
int stack[20], choice, n, top = -1, a, i;
void push();
void display();
int main()
{
    int g;
    printf("\n Enter the size of Stack:");
    scanf("%d", &n);
    do
    {
        printf("\n\t 1.PUSH\n\t 2.DISPLAY\n\t Any number for EXIT\n");
        printf("\n Enter the Choice:");
        scanf("%d", &g);
        switch (g)
        {
        case 1:
            push();
            break;
        case 2:
            display();
            break;
        default:
            exit(1);
        }
    } while (g != 3);
    return 0;
}
void push()
{
    if (top >= n - 1) //If Stack if Full
    {
        printf("\n\tSTACK is over flow");
    }
    else //If the stack has space
    {
        printf(" Enter a value to be pushed:");
        scanf("%d", &a);
        top++;          //Stack value will be pushed to top
        stack[top] = a; //Assigning the value to a
    }
}
void display()
{
    if (top >= 0)
    {
        printf("\n The elements in STACK \n");
        for (i = top; i >= 0; i--) //Loop for display stack
        {
            printf("|-----|");
            printf("\n|  %d  |\n", stack[i]);
        }
        printf("\n Press Next Choice");
    }
    else
    {
        printf("\n The STACK is empty");
    }
}