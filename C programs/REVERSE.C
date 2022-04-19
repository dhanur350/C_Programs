main()
{
 int n,d1,d2,rev;
 clrscr();
 printf("\n \n  Enter an integer : ");
 scanf("%d",&n);
 d1=n%10;
 d2=n/10;                         /*If we want to reverse the
				    number with more than 2 digits*/
 //d3=d2%10; d4=n/100;
 rev=d1*10+d2;
 printf("\n  Reversed no. = %d",rev);
 getch();
}