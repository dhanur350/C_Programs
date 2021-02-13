main()
{
    int recsum(int);
    int n;
    clrscr();
    printf("\n ***Program of adding 'n' natural numbers***");
    printf("\n Enter Range: ");
    scanf("%d", &n);
    printf("\n Sum of first %d numbers is: %d",n, recsum(n));
    getch();
}
int recsum(int num)
{
        while(num)
        return (num+recsum(num-1));
}