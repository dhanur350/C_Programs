#include <stdio.h>
void main()
{
    static int i = 1, n;
    printf("\n Enter range of this series : ");
    scanf("%d", &n);
    while (i <= n) //Loop breaks till range no.
    {
        printf(" |%d| ", i * i); //For series of 1,4,9,16 and so on...
        i++;
    }
}