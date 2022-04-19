#include <stdio.h>
void main()
{
    int n, num, rev = 0, remainder;
    printf("\n Enter an integer:");
    scanf("%d", &n);
    num = n;
    while (n != 0) //Reversing no. loop
    {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n /= 10;
    }
    if (num == rev) //No. checking if reversed matched
        printf("\n This number = %d is palindrone ", num);
    else
        printf("\n This number = %d is not palindrone ", num);
}