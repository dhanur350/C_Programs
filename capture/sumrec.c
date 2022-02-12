main() 
{
    int num;
    printf("\n Enter a number : ");
    scanf("%d", &num);
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