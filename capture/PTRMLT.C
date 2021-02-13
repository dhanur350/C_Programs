main()
{
 int multiply(int * ,int * ,int *);
 int a,b,c;
 clrscr();
 printf("\n Enter three numbers : ");
 scanf("%d%d%d",&a,&b,&c);
 printf("\n Multiplied answer is %d",multiply(&a,&b,&c));
 getch();
 }
 int multiply(int *x,int *y,int *z)
 {
 int d;
 d=*x * *y * *z;
 return d;
 }
