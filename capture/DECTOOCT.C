main()
{
  int decnum,octnum,i;
  clrscr();
  i=1; octnum=0;
  printf("\n *****Decimal to Octal conversion*****");
  printf("\n Enter the decimal number : ");
  scanf("%d",&decnum);
  printf("\n Decimal number : %d =",decnum);
  while(decnum!=0)
  {
  octnum=octnum+(decnum%8)*i;
  decnum=decnum/8;
  i=i*10;
  }
  printf(" %d number in octal",octnum);
  getch();
}