#include <stdio.h>
void main()
{
    int num, c = 1, rem, sum;
    while (c <= 500) //No till 500 it'll check it
    {
        num = c;
        sum = 0;
        while (num) //Loop to extract no and multiply
        {
            rem = num % 10;
            sum = sum + (rem * rem * rem);
            num = num / 10;
        }
        if (c == sum)
        {
            printf("%d is a Armstrong number\n", c);
        }
        c++;
    }
}