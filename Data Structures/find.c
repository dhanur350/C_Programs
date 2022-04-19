#include <stdio.h>
void main()
{
    int a[5], i;
    printf("Enter 5 no.s :-> ");
    for (i = 1; i <= 5; i++) //Scan all elements into stack of array
        scanf("%d", &a[i]);
    printf("\n The 5 no.s entered are :"); //Show all elements stored in an array
    for (i = 1; i <= 5; i++)
        printf("|%d|", a[i]);
    for (i = 1; i <= 5; i++) //Compares elements from 1st to 5th location of array
    {
        if (a[0] < a[i]) //Compare all elements one by one with each other
        {
            a[0] = a[i]; //If large element found then place that element in start element of this array and print it
        }
    }
    printf("\n The largest no. of all these no. is %d one", a[0]); //
}