#include <stdio.h>
int stack[20], choice, n, top = -1, a, i;
void push();
void pop();
void display();
int main()
{
    //clrscr();
    printf("\n Enter the size of Stack:");
    scanf("%d", &n);
    do //Loop till the Value set by user not equal to 4
    {
        printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT");
        printf("\n Enter the Choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            push();
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            display();
            break;
        }
        case 4:
        {
            printf("\n Program Exited");
            break;
        }
        default:
        {
            printf("\n Please Enter a Valid Choice(1/2/3/4)");
        }
        }
    } while (choice != 4);
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
void pop()
{
    if (top <= -1)
    {
        printf("\n\t Stack is under flow"); //If Stack has no value left to pop
    }
    else
    {
        printf("\n\t The popped elements is %d", stack[top]);
        top--; //Remove the top Element
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