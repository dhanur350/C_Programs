#include <stdio.h>
void main()
{
    int i, arr[25], prsnt = 0, num;
    printf("Please enter 25 numbers: \n");
    for (i = 0; i < 25; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n\nPlease enter the number to be searched: ");
    scanf("%d", &num);
    for (i = 0; i < 25; i++)
    {
        if (num == arr[i])
            prsnt = prsnt + 1;
    }
    if (prsnt == 0)
        printf("\nNumber does not present in the array.");
    else
    {
        printf("\nNumber %d presents in the array.",num);
        printf("\nNumber of times it appears = %d.\n", prsnt);
    }
}