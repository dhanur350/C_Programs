main()
{
int product(int,int);
int x,y;
x=5; y=2;
printf("\n The product of two numbers : %d",product(x,y));
getch();
}
int product(int x, int y)
{
//if
if(x<y)
return product(y,x);

else if(y!=0)
return (x+product(x,y-1));

else
return 0;
}