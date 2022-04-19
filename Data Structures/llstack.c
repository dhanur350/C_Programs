#include <stdio.h>
#include <stdlib.h>
void push();
void pop();
void display();
struct node
{
    int val;
    struct node *next;
};
struct node *head;
void main()
{
    static int choice;
    printf("#*#*#*#*Stack Push and Pop using linked list*#*#*#*#\n");
    while (choice != 4)
    {
        printf("\n\nChose one from the below options...\n");
        printf("\n 1.Push \n 2.Pop \n 3.Show \n 4.Exit \n");
        scanf("%d", &choice);
        switch(choice)
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
            printf(" Exiting....");
            exit(0);
        }
        default:
        {
            printf(" Please Enter valid choice ");
        }
        };
    }
}
void push()
{
    int val;
    struct node *ptr = (struct node *)malloc(sizeof(struct node)); //Allocating memory
    if (ptr == NULL) 
    {
        printf(" Not able to push the element ");
    }
    else
    {
        printf(" Enter the value ");
        scanf("%d", &val);
        if (head == NULL) //Start is empty
        {
            ptr->val = val;
            ptr->next = NULL;
            head = ptr;
        }
        else //if start having some value then insert into next space
        {
            ptr->val = val;
            ptr->next = head;
            head = ptr;
        }
        printf(" Item pushed %d",val);
    }
}

void pop()
{
    int item;
    struct node *ptr;
    if (head == NULL)//If Start is empty , or no data is there ?
    {
        printf(" Underflow ");
    }
    else //If Start have some item stored in the link
    {
        item = head->val;
        ptr = head;
        head = head->next;
        free(ptr);
        printf(" Item popped ");
    }
}
void display()
{
    int i;
    struct node *ptr; //Using struct to display
    ptr = head;
    if (ptr == NULL) //checking if stack is empty
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Printing Stack elements \n");
        while (ptr != NULL) //Traverse each element till last element
        {
            printf("|-----|");
            printf("\n|  %d  |\n", ptr->val); //Loop will access each element till last
            ptr = ptr->next;
        }
    }
}