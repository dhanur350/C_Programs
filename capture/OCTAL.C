main()
{
    clrscr();
    int n, rev = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &n);
    while (n != 0) {
	remainder = n % 16;
	rev = rev * 10 + remainder;
	n /= 16;
    }
    printf(" Reversed number = %d", rev);
     getch();
}