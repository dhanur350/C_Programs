/* write a c program to return the sum of 2 no.'s*/
#include<stdio.h>
void main()
{
int no1,no2,s;
int sum(int,int); // Step 1
printf("\n Enter 2 no.s : ");
scanf("%d%d",&no1,&no2);
printf("\n Calling function sum : ");
s=sum(no1,no2);  //Step 2
printf("\n Sum of 2 no.s is : %d ",s);
}
int sum(int x,int y)   //Step 3
{
return(x+y);
}
