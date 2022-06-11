main()
{
 int i,d,fact=1;
 printf("\n ****Factorial Program by DK ****");
 printf("\n Enter the number :");
 scanf("%d",&d);
 for(i=d;i>0;i--)
 {
  fact=fact*i; //d=3 i=3 fact=1*3=3 i=2 fact=3*2=6
	       //i=1
 }
 printf("Factorial is : %d",fact);
 getch();
}