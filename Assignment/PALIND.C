main()
{
    int n, num , rev = 0, remainder;
    clrscr();
    printf("\n Enter an integer: ");
    scanf("%d", &n);
    num=n;
    while (n != 0)
    {
	remainder = n % 10;
	rev = rev * 10 + remainder;
	n /= 10;
    }
    if(num==rev)
    printf("\n This number = %d is palindrone : ", num);
    else
    printf("\n This number = %d is not palindrone : ", num);
    getch();
}