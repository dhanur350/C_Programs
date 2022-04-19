#include <stdio.h>
void main()
{
    int a[10], i;
    a[0] = 2006;
    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }

    /*int b[10];
    int a[10], i;
    printf("\n  %zu   \n", sizeof(b));
    printf("Size of int is %zu", sizeof(short int));
    for (i = 0; i < 10; i++)
    {
        a[i] = i * i;
        printf("|%d|", a[i]);
    }*/
}