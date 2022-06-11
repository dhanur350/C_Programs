main()
{
    int i, j, k, count=1;
    //for loop for all the rows=4
    clrscr();
    printf("\n For loop to print pyramid of 1 to 10\n\n");
    for(i=1;i<=4;i++)
    {
	//add left space for pattern
	for(j=1;j<=4-i;j++)
	{
	    printf("  ");
	}
	//add element after space
	for(k=1;k<=i;k++)
	{
	    printf("  %d ",count);
	    count++;
	}
    printf("\n");
    }
    getch();
}