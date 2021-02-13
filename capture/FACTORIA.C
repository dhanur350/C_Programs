main()
{
  int num,i;
  long int fact=1;
  clrscr();
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