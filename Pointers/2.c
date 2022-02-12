#include <stdio.h>
void main()
{
    int i=3,*j;
    j = &i;
    printf("\n Value of i is %d",i);
    printf("\n Value of j is %d",*j);
    printf("\n Address of i is %p",&i);
    printf("\n Address of j is %p",&j);
}