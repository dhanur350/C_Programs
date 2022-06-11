main()
{
  int n,sum;
  sum=0;
  clrscr();
  printf("\n *****Sum of the Series by DK******");
  printf("\n Enter the nth series :");
  scanf("%d",&n);
  sum=(n*(n+1)*(2*n+1))/6;
  printf("\n Sum of the %d th series : %d",n,sum);
  getch();
}
