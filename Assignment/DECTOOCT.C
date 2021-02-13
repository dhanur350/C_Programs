main()
{
  int decnum,octnum,i;
  clrscr();
  i=1; octnum=0;
  printf("\n Enter the decimal number : ");
  scanf("%d",&decnum);
  while(decnum!=0)
  {
  octnum=octnum+(decnum%8)*i;
  decnum=decnum/8;
  i=i*10;
  }
  printf("\n Converted %d number in octal is %d  ",decnum,octnum);
  getch();
}