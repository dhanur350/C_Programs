main()
{
int num,rem,prod=1;
clrscr();
printf("\n Enter 5 digit no. : ");
scanf("%d",&num);
while(num!=0)
{
rem=num%10;
prod=prod*rem;
num=num/10;
}
printf("\n Product is : %d",prod);
getch();
}
