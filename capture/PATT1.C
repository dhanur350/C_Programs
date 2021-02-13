main() 
{
   int i, j, space, rows, k = 0;
   rows=5;
   clrscr();
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
   for (i = rows; i >= 1; --i)
   {
      for (space = 0; space < rows - i; ++space)
	 printf("  ");

      for (j = i; j <= 2 * i - 1; ++j)
	 printf(" %d",j);
      for (j = 0; j < i - 1; ++j)
	 printf(" %d",j);
      printf("\n");
   }
   getch();
}