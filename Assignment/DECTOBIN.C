main()
{
    int n,i,rem,step;
    long bin = 0;
    clrscr();
    i=1; step=1;
    printf("\n ***Decimal to Binary Conversion***");
    printf("\n Enter a decimal number: ");
    scanf("%d", &n);
    printf("\n %d in decimal ",n);
    while (n != 0)
    {
	rem = n % 2;
	n = n / 2;
	bin = bin + rem * i;
	i = i * 10;
    }
    printf(" = %ld in binary", bin);
    getch();
}
