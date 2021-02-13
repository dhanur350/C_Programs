main()
{
int check,num,i;
check=0;
clrscr();
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
/*In the program, a for loop is iterated from i = 2 to i < num/2.
In each iteration, whether n is perfectly divisible by i is checked using:
if (num % i == 0) {}
If num is perfectly divisible by i, num is not a prime number.
In this case, check is set to 1, and the loop is terminated
using the break statement.
After the loop, if num is a prime number, check will still be 0.
However, if n is a non-prime number, check will be 1.*/