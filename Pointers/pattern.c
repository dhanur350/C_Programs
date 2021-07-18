#include <stdio.h>
void main()
{
    int a, b, n, i, j;
    printf(" Enter any number between 1 to 100 -> ");
    scanf("%d", &n);
    while (i != 3)
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < i; j++)
            {
                if (j < i)
                    printf("%d", n);
            }
            printf("&");
        }
    }
}