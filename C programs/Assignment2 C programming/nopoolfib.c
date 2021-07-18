#include <stdio.h>
void main()
{
    void printFibonacci(int);
    int n;
    printf(" Enter the number of elements: ");
    scanf("%d", &n);
    printf(" Fibonacci Series: ");
    printFibonacci(n - 2); //n-2 because 2 numbers are already printed
}
void printFibonacci(int n)
{
    static int num = 0, n2 = 1, n3;
    if (n > 0)
    {
        n3 = num + n2;
        num = n2;
        n2 = n3;
        printf(" %d", n3);
        printFibonacci(n - 1);
    }
}