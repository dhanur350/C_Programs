   main()
   {
    int loop5(int num);
    int num, add;
    clrscr();
    printf("\n ***Adding 5 numbers without recursion***");
    printf("\n Enter any 5 digit integer: ");
    scanf("%d", &num);
    add = loop5(num);
    printf("\n Sum of 5 digit no. : %d",add);
   getch();
   }
     int loop5(int num)
     {
      int res, count=0;
      while(num!=0)
       {
	res=num%10;
	count =count + res;   //count=count+res;
	num = num/10;
       }
	return count;
     }