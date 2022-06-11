  main()
  {
   int i,j,temp;
   clrscr();
   printf("\n  Enter 1st number : ");
    scanf("%d",&i);
    printf("\n  Enter 2nd number : ");
    scanf("%d",&j);
    temp=i;
    i=j;
    j=temp;
   printf("\n Interchanged value are 1st : %d and 2nd : %d",i,j);
   getch();
  }