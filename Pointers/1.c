#include <stdio.h>
void main()
{
    int i = 3;
    printf("\n Address of i is %p",&i);
    printf("\n Value o i is %d",i);
    printf("\n value of i is %d",*(&i)); //printing value of *(&i) as same as printing of i
     
}