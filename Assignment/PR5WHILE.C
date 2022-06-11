main()
{
long int num,rem,prod=1;
clrscr();
printf("\n *****Product of the Series by DK******");
printf("\n Enter 5 digit no. : ");
scanf("%ld",&num);
while(num!=0)
{
rem=num%10;
prod=prod*rem;
num=num/10;
}
printf("\n Product is : %ld",prod);
getch();
}
