/* write a menu driven program which has following options
 1. factorial of a no.
 2. Prime no.
 3. odd or even
 4. exit */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    while (1)
    {
        int o;
        printf("\n 1 for factorial \n 2 for prime \n 3 for odd option \n 4 for exit");
        printf("\n Enter option");
        scanf("%d", &o);
        switch (o)
        {
        case 1:
            printf("\n Factorial");
            break;
        case 2:
            printf("\n Prime no.");
            break;
        case 3:
            printf("\n Odd option");
            break;
        case 4:
            printf("\n Exit");
            exit(0);
            break;
        }
    }
    return 0;
}