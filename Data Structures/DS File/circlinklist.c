#include <stdio.h>
#include <stdlib.h>
int item, c = 0;
struct node
{
    int num;
    struct node *next;
} *start = NULL, *last = NULL;
typedef struct node node;
typedef struct node *nptr;
int count();
void ins_beg();
void del_beg();
void del_bet();
void del_end();
void traverse();
void main()
{
    int num;
    while (1)
    {
        printf("\n#### Circular Linked List ");
        printf("\n-> 1. INSERTION_BEG");
        printf("\n-> 2. DELETION_BEG");
        printf("\n-> 3. DELETION_BET");
        printf("\n-> 4. DELETION_END");
        printf("\n-> 5. TRAVERSE");
        printf("\n-> Press any number to EXIT");
        printf("\n--> ENTER YOUR CHOICE: ");
        scanf("%d", &num);
        switch (num)
        {
        case 1:
            ins_beg();
            break;
        case 2:
            del_beg();
            break;
        case 3:
            del_bet();
            break;
        case 4:
            del_end();
            break;
        case 5:
            traverse();
            break;
        default:
            printf("\n WRONG CHOICE"); exit(0);
        }
    }
}
int count()
{
    int c = 0;
    nptr p;
    p = start;
    while (p->next != start)
    {
        p = p->next;
        c++;
    }
    c++;
    return c;
}

void ins_beg()
{
    nptr p;
    p = (nptr)malloc(sizeof(node));
    printf("\nenter the info part: ");
    scanf("%d", &item);
    p->num = item;
    if (start == NULL)
    {
        nptr q;
        q = (nptr)malloc(sizeof(node));
        q->next = p;
        q->num = ++c;
        start = q;
        last = p;
        p->next = start;
    }
    else
    {
        p->next = start->next;
        start->next = p;
        start->num = ++c;
    }
}
void del_beg()
{
    if (start == NULL)
    {
        printf("\nunderflow");
        return;
    }
    else if (start->num == 1)
    {
        nptr p;
        p = start->next;
        start = last = NULL;
        printf("\ndeleted node is %d", p->num);
        free(p);
    }
    else
    {
        nptr p;
        p = start;
        p = p->next;
        start->next = p->next;
        printf("\ndeleted node is %d", p->num);
        free(p);
        start->num = --c;
    }
}
void del_end()
{
    if (start == NULL)
    {
        printf("\nunderflow");
        return;
    }
    else if (start->num == 1)
    {
        nptr p;
        p = start->next;
        start = last = NULL;
        printf("\ndeleted node is %d", p->num);
        free(p);
    }
    else
    {
        nptr p, q;
        p = q = start;
        while (p->next != start)
        {
            q = p;
            p = p->next;
        }
        q->next = start;
        last = q;
        printf("\ndeleted node is %d", p->num);
        free(p);
        start->num = --c;
    }
}
void del_bet()
{
    int i = 1, pos, f;
    nptr p, q;
    if (start == NULL)
    {
        printf("\n\nempty");
    }
    else
    {
        printf("\nenter position: ");
        scanf("%d", &pos);
        p = q = start->next;
        f = count();
        if (pos == 0 || pos == 1 || pos >= f)
            printf("\nDELETION NOT POSSIBLE");
        else
        {
            while (i < pos)
            {
                q = p;
                p = p->next;
                i++;
            }
            q->next = p->next;
            start->num = --c;
            printf("deleted node: %d", p->num);
            free(p);
        }
    }
}
void traverse()
{
    nptr p;
    if (start == NULL)
    {
        printf("\nunderflow");
    }
    else
    {
        p = start;
        printf("\nHEADER NODE(num part) -> %d", c);
        printf("\n NODES ARE : ");
        p = start->next;
        while (p->next != start)
        {
            printf(" %d", p->num);
            p = p->next;
        }
        printf(" %d", p->num);
    }
}