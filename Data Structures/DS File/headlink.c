#include <stdio.h>
#include <stdlib.h>
int item, c = 0,srch;
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
void traverse();
void main()
{
    int num;
    while (1)
    {
        printf("\n#### Header linked list ####");
        printf("\n-> 1. Insert at beginning ");
        printf("\n-> 2. Delete from beginning ");
        printf("\n-> 3. Treaverse(Display)");
        printf("\n-> Any key for .EXIT");
        printf("\n~->ENTER YOUR CHOICE: ");
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
            traverse();
            break;
        default:
            printf("\nOkay ");
            exit(0);
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
void ins_bet()
{
    int item, i = 1, pos, f;
    nptr p, q;
    p = (nptr)malloc(sizeof(node));
    printf("\n\nenter the position where you want to insert");
    scanf("%d", &pos);
    f = count();
    if (pos == 0 || pos == 1 || pos > f)
    {
        printf("\nINSERTION NOT POSSIBLE");
    }
    else
    {
        q = start;
        printf("\nenter the item: ");
        scanf("%d", &item);
        p->num = item;
        q = start->next;
        while (i < pos - 1)
        {
            q = q->next;
            i++;
        }
        p->next = q->next;
        q->next = p;
        start->num = ++c;
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
            printf("|-%d-|", p->num);
            p = p->next;
        }
        printf("|-%d-|", p->num);
    }
}