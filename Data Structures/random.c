#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main()
/*{
    int a[5], i;
    srand(time(0));
    for (i = 1; i <= 5; i++)
    {
        printf("%d", rand());
    }
}*/
{
    int a[5], i;
    for (i = 1; i <= 5; i++)
    {
        printf("|%d|", rand() % 10);
    }
}