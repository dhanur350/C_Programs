main() 
{
    int number;
    clrscr();
    printf("\n Enter a number : ");
    scanf("%d", &number);
    printf("Sum = %d", addnum(num));
    getch();
}
int addnum(int n) 
{
    if (n != 0)
        return n + addnum(n - 1);
    else
        return n;
}