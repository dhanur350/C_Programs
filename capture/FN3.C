/* write a c program to return the sum of 3 no.'s*/
main()
{
int no1,no2,no3,s;
int sum(int,int,int); // Step 1
clrscr();
printf("\n Enter 3 no.s : ");
scanf("%d%d%d",&no1,&no2,&no3);
printf("\n Calling function sum : ");
s=sum(no1,no2,no3);  //Step 2 call by value
printf("\n Sum of 3 no.s is : %d ",s);
getch();
}
int sum(int x,int y,int z)   //Step 3
{
return(x+y+z);
}
