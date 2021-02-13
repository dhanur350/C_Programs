main()
{
 int n1,n2;
 clrscr();
 printf("\n Enter two numbers :");
 scanf("%d%d",&n1,&n2);
 while(n1!=n2)
 {
  if(n1>n2)
   n1=n1-n2;
  else
   n2=n2-n1;
 }
 printf("\n GCD = %d",n1);
 getch();
}