main()
{
 int facto();
 int primeno();
 int evenodd();
 while(1)
 {
 int select;
 clrscr();
 printf("\n Select any choice :");
 printf("\n 1. Factorial of a number. ");
 printf("\n 2. Prime or not  ");
 printf("\n 3. Odd or even  ");
 printf("\n 4. Exit ");
 printf("\n Select -> ");
 scanf("%d",&select);
    switch(select)
   {
   case 1: facto(); break;
   case 2: primeno(); break;
   case 3: evenodd(); break;
   case 4: exit(0); break;
   default:
   printf("\n **ERROR!**");
   }
  }
  getch();
 }
  int facto()
  {
  int num,i;
  long int fact=1;
  printf("\n Enter any number :");
  scanf("%d",&num);
  if(num<=0)
  printf("**ERROR!**");
  else
  {
  for(i=1;i<=num;++i)
  fact=fact*i;
  }
  printf("\n Factorial of %d = %ld",num,fact);
  getch();
  }

 int primeno()
{
int check,num,i;
check=0;
printf("");
printf("\n Enter any number : ");
scanf("%d",&num);
for(i=2;i<=num/2; ++i)
{// condition for non-prime
  if(num%i==0)
  {
  check=1;
  break;
  }
}
if(num==1)
printf("\n This number is neigther prime number nor composite :");
else
{
if(check==0)
printf("\n This number %d is a prime number :",num);
else
printf("\n This number %d is not a prime number :",num);
}
getch();
}

   int evenodd()
   {
   int n;
   printf("\n Enter the number to check : ");
   scanf("%d",&n);
   if((n&1)==0)
   printf("\n : The no. is even : ");
   else
   printf("\n : The no. is odd : ");
   getch();
   }