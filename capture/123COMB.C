main()
{
  int i,j,k;
  clrscr();
  printf("\n ***Combination of all numbers of 123***\n\n");
  for(i=1;i<=3;i++)
  {
   for(j=1;j<=3;j++)
   {
    for(k=1;k<=3;k++)
    {
    //Print i,j,k and to remove repeated numbers using if else loop
    if(i!=j && i!=k && j!=k)
    printf("***%d%d%d*** \n",i,j,k);
    }}}
   getch();
}