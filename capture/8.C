main()
{
int a;
a=sumdig(12345);
clrscr();
printf("\n %d",a);
getch();
}
sumdig(int num)
{
int sum;
int a,b;
a=num%10;
b=(num-a)/10;
sum=sum+a;
if(b!=0)
sumdig(b);
else
return(sum);
}