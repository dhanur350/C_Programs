main()
{
  int x=20,y=35;
  x=y++ + x++;
  y=++y + ++x;
  printf("%d %d",x,y);
  getch();
}