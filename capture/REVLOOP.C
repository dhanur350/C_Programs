main() 
{
    long int n, rev = 0, remainder;
    clrscr();
    printf("\n *****Reverse entered digits by DK******");
    printf("\n Enter an integer: ");
    scanf("%ld", &n);
    while (n != 0)
    {
	remainder = n % 10;
	rev = rev * 10 + remainder;
	n /= 10;
    }
    printf("\n Reversed number = %ld", rev);
    return 0;
}