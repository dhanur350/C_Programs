#include<stdio.h>
#include<stdlib.h>
#define MAX 20
void store(void);
void display(void);
int isfull(void);
int isempty(void);
void retrieve(void);
struct queue
{
    int queue[MAX];
    int fr, ra;
} q;
void main(void)
{
    int ch;
    q.fr = 0;
    q.ra = -1;
    do
    {
        printf("\n1.store \n 2.retrieve\n 3.display\n 4.exit\n");
        printf("Enter your choice\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            store();
            break;
        case 2:
            retrieve();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("\n wrong choice\n");
        }
    } while (ch <= 4);
}

void store(void)
{
    int x;

    if (isfull() == 1)
    {
        printf("\n queue is full\n");
    }
    else
    {
        q.ra = q.ra + 1;
        printf("\n Enter the no\n");
        scanf("%d", &x);
        q.queue[q.ra] = x;
    }
}

void retrieve(void)
{
    if (isempty() == 1)
    {
        printf("\nqueue is empty\n");
    }
    else
    {
        printf("\n retrieved number is %d", q.queue[q.fr]);
        q.fr = q.fr + 1;
    }
}

void display(void)
{
    int i;
    printf("\n\n element of queue are as follows \n");
    for (i = q.fr; i <= q.ra; i++)
    {
        printf("\n no=%d", q.queue[i]);
    }
}

int isfull(void)
{
    if (q.ra == (MAX - 1))
    {
        return (1);
    }
    else
    {
        return (0);
    }
}

int isempty(void)
{
    if (q.ra)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}