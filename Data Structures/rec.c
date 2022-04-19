#include <stdio.h>
int recursion(int);
int n; // globally define
void main()
{
    int r;
    scanf("%d", &n);  // n=5
    r = recursion(n); // recursion (6)
    printf("\t%d\n", r);
}
int recursion(int a) // n=5 -> n=4 ->n=3
{
    // int i;
    /*for (i = 0; i < n; i++)
    {
        return n - recursion(n - 1);
    }*/
    if (a != 0)                      // 6 !=0
        return a + recursion(a - 1); // 5 + 4 + recursion(4-1)
    else
        return 0;
}
