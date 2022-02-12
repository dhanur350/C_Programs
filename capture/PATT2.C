main() 
{
   int i, j, space, rows, k = 0;
   clrscr();
   rows=5;
   for (i = 1; i <= rows; ++i, k = 0)
   {
      for (space = 1; space <= rows - i; ++space)
      {
	 printf("  ");
      }
      while (k != 2 * i - 1)
       {
	 printf(" %d",k);
	 ++k;
       }
      printf("\n");
   }
   getch();
}