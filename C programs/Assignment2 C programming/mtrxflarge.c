#include <stdio.h>
void main()
{
    int arr[5][5];
    int i, j, k;
    printf(" Enter all 5 arrays list number : \n");
    for (i = 0; i <= 4; i++)
    {   
        printf(" Enter %d position array numbers : ",i+1);
        for (j = 0; j <= 4; j++)
        scanf("%d", &arr[i][j]);
    }
    for (i = 0; i <= 4; i++)
    {
        for (j = 0; j <= 4; j++)
        {   //Array Checker which number is largest
            if (arr[i][j] > arr[i][j - 1]) //Loop will check till 5th array list    
                {k = arr[i][j];             //until it will get upto largest number   
            arr[i][j] = k;}            
        }
    }
    printf(" The Largest number in the 5*5 matrix is :  %d ", k);
}