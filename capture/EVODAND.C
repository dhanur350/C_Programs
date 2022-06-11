main()
{
int n;
clrscr();
printf("\n Enter the number to check : ");
scanf("%d",&n);
if((n&1)==0)
/* The bitwise operator works on individual bits of a variable
 for example if we do 3&1 it will become true in if statement
 and that's odd concept checking.*/
printf("\n : The no. is even : ");
else
printf("\n : The no. is odd : ");
getch();
}