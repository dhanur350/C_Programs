#include <stdio.h>
#include <stdlib.h>
void create(); 
void insertbeg();
void insertloc(); 
void insertend();  
void display(); 
struct node 
{ 
	int info; 
	struct node *link; 
}*ptr,*start; 
void main() 
{ 
    int m;
    while (1)
    {
        printf("\n####LinkList MENU ####");
        printf("\n-> 1.INSERTION_BEG");
        printf("\n-> 2.INSERTION_BET");
        printf("\n-> 3.INSERTION_END");
        printf("\n-> 4.TRAVERSE");
        printf("\n-> Press any number to EXIT");
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d", &m);
        switch (m)
        {
        case 1:
            insertbeg();
            break;
        case 2:
            insertloc();
            break;
        case 3:
            insertend();
            break; 
        case 4:
            display();
            break;
        default:
            exit(1);
        }
    }
} 
void create() 
{ 
	int n,i; 
	printf("enter the total no. of nodes :"); 
	scanf("%d",&n); 
	start=(struct node*)malloc(sizeof(struct node)); 
	ptr=start; 
	for(i=1;i<=n;i++) 
	{ 
		scanf("%d",&ptr->info);
		if(i==n) 
			ptr->link=NULL; 
		else 
			ptr->link=(struct node*)malloc(sizeof(struct node)); 
		ptr=ptr->link; 
	} 
	display();
}
void display() 
{ 
	printf("\n\n linklist is : ");
	ptr=start; 
	while(ptr!=NULL) 
	{ 
		printf("|_%d_|",ptr->info); 
		ptr=ptr->link; 
	} 
}
void insertbeg() 
{ 
    int itm; 
    struct node *new; 
    printf("\n enter element :"); 
    scanf("%d",&itm); 
    new=(struct node*)malloc(sizeof(struct node)); 
    new->info=itm; 
    new->link=start;
    start=new;
    display(); 
}
void insertloc() 
{ 
	int itm, loc, count=0; 
	struct node *new; 
	printf("\n enter element :"); 
	scanf("%d",&itm); 
	printf("\n enter location after which you want to insert:"); 
	scanf("%d",&loc); 
	new=(struct node*)malloc(sizeof(struct node));
	new->info=itm;
	ptr=start; 
	while(ptr!=NULL) 
	{
		count++; 
		if(count==loc) 
		    break; 
		ptr=ptr->link;
	} 
	if(ptr==NULL) 
		printf("location not found"); 
	else 
	{ 
		new->link=ptr->link; 
		ptr->link=new; 
	} 
	display(); 
}
void insertend() 
{ 
    int itm; 
    struct node *new; 
    printf("\n enter element :"); 
    scanf("%d",&itm); 
    new=(struct node*)malloc(sizeof(struct node)); 
    ptr=start; 
    while(ptr->link!=NULL) 
        ptr=ptr->link; 
    ptr->link=new;
    new->info=itm; 
    new->link=NULL;
    display(); 
}