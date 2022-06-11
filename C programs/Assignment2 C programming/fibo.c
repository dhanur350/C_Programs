#include <stdio.h>
void main()
{
    long int fibo(long int);
    long int num, c = 0, i;
    printf(" Program to find fibnocci series of any number \n");
    printf(" Enter any number ");
    scanf("%ld", &num);
    printf(" Fibonacci Series: ");
    printf(" %ld ", fibo(c));
}
long int fibo(long int num)
{
    if (num == 0)
        return 0;
    else if (num == 1)
        return 1;
    //fibonacci = 1 1 2 3 5 8
    // where n = (n-1) + (n-2)
    else
        return (fibo(num - 1) + fibo(num - 2));
}