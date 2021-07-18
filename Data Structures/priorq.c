#include <stdio.h>
#include <stdlib.h>
#define value 5 
void insertprior(int);
void deleteprior(int);
void create();
void check(int);
void dispqueue();
int priorque[value];
int front, rear;
void main()
{
    int n, ch;
    create();
    while (1)
    {
        printf("\n 1 -> Insert an element into queue");
        printf("\n 2 -> Delete an element from queue");
        printf("\n 3 -> Display queue elements");
        printf("\n 4 -> Press any number to exit");
        printf("\n Enter your choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\n Enter value to be inserted : ");
            scanf("%d", &n);
            insertprior(n);
            break;
        case 2:
            printf("\n Enter value to delete : ");
            scanf("%d", &n);
            deleteprior(n);
            break;
        case 3:
            dispqueue();
            break;
        default:
            printf("\n Okay, have a nice day");
            exit(0);
        }
    }
}
/* Function to create an empty priority queue */
void create()
{
    front = rear = -1;
}
/* Function to insert value into priority queue */
void insertprior(int data)
{
    if (rear >= value - 1)
    {
        printf("\n Queue overflow no more elements can be inserted: ");
        return;
    }
    if ((front == -1) && (rear == -1))
    {
        front++;
        rear++;
        priorque[rear] = data;
        return;
    }
    else
        check(data);
    rear++;
    dispqueue();
}
/* Function to check priority and place element */
void check(int data)
{
    int i, j;
    for (i = 0; i <= rear; i++)
    {
        if (data >= priorque[i])
        {
            for (j = rear + 1; j > i; j--)
            {
                priorque[j] = priorque[j - 1];
            }
            priorque[i] = data;
            return;
        }
    }
    priorque[i] = data;
}
/* Function to delete an element from queue */
void deleteprior(int data)
{
    int i;
    if ((front == -1) && (rear == -1))
    {
        printf("\n Queue is empty no elements to delete: ");
        return;
    }
    for (i = 0; i <= rear; i++)
    {
        if (data == priorque[i])
        {
            for (; i < rear; i++)
            {
                priorque[i] = priorque[i + 1];
            }
            priorque[i] = -4;
            rear--;
            if (rear == -1)
                front = -1;
            return;
        }
    }
    printf("\n %d not found in queue to delete ", data);
}
/* Function to display queue elements */
void dispqueue()
{
    if ((front == -1) && (rear == -1))
    {
        printf("\nQueue is empty");
        return;
    }
    for (; front <= rear; front++)
    {
        printf(" _%d_ ", priorque[front]);
    }
    front = 0;
}