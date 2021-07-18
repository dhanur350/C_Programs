#include <stdio.h>
void main()
{
    void reve(int);
    int n;
    printf(" Input the number of elements to store in the array (max 15) : ");
    scanf("%d", &n);
    reve(n);
    
}
void reve(int n)
{
    int i, arr1[15],*pointer;
    pointer = &arr1[0]; // pointer stores the address of base array arr1
    printf(" Input %d number of elements in the array : \n", n);
    for (i = 0; i < n; i++)
    {
        printf(" element - %d : ", i + 1);
        scanf("%d", pointer); //accept the address of the value
        pointer++;
    }

    pointer = &arr1[n - 1];

    printf("\n The elements of array in reverse order are :");

    for (i = n; i > 0; i--)
    {
        printf("\n element - %d : %d  ", i, *pointer);
        pointer--;
    }
    printf("\n\n");
}