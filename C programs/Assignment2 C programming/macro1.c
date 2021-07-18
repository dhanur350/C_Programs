#include<stdio.h>
#define UPPER(x) (x>=65 && x<=90)
#define SMALL(y) (y>=97 && y<=123)
#define ALPHABET(z) (z>=65 && z<=90 || z>=97 && z<=123)
#define BIGGER(a,b) (a>b)

void main() 
{

int i,d1,d2;
char ch,ch1;
clrscr();

printf("\t enter your choice: \n");
printf("\t===================\n\n");

printf("1: to test if character is small case letter or not\n\n");
printf("2: to test if character is upper case letter or not\n\n");
printf("3: to test if character is an alphabet or not\n\n");
printf("4: to find bigger of two number\n\n\n");

printf("choice: ");
scanf("%d",&i);

switch (i) {

case 1:

clrscr();

printf("enter any character\n\n");

scanf(" %c",&ch);

if SMALL(ch)
printf("\n\n it is a small case letter.\n");
else
printf("\n\nit is not a small case letter.\n");

break;

case 2:

clrscr();

printf("enter any character\n\n");

scanf(" %c",&ch);

if UPPER(ch)
printf("\n\nit is an upper case letter.\n");
else
printf("\n\nit is not an upper case letter.\n");

break;

case 3:

clrscr();

printf("enter any character\n\n");

scanf(" %c",&ch);

if ALPHABET(ch)
printf("\n\nit is an alphabet.\n");

else
printf("\n\nit is not an alphabet.\n");

break;

case 4:

clrscr();

printf("enter two numbers\n\n");

scanf("%d%d",&d1,&d2);

if BIGGER(d1,d2)

printf("\n\n%d is bigger\n",d1);

else
printf("\n\n%d is bigger \n",d2);

break;

default:

printf("\n\n\nwrong choice entered\n");


}

getch();
}
