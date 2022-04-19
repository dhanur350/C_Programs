#include <stdio.h>
#include <stdlib.h>
void main()
{
    int linear();
    int binary();
    int e;
    while (1)
    {
        printf("***Searching Options****");
        printf("\n 1.Linear Search\n 2.Binary Search\n 3.Exit \n");
        printf(" Choose your option :");
        scanf("%d", &e);
        switch (e)
        {
        case 1:
            linear();
            break;
        case 2:
            binary();
            break;
        case 3:
            exit(1);
        default:
            printf("???Error");
            break;
        }
    }
}
int linear()
{
    int array[50], search, c, n;
    printf(" How many elements do you want to be searched \n");
    scanf("%d", &n);
    printf("Enter %d numbers\n", n);
    for (c = 0; c < n; c++)
        scanf("%d", &array[c]);
    printf("Enter a number to search\n");
    scanf("%d", &search);
    for (c = 0; c < n; c++)
    {
        if (array[c] == search) /* If required element is found */
        {
            printf("%d is present at location %d.\n", search, c + 1);
            break;
        }
    }
    if (c == n)
        printf("%d isn't present in the array.\n", search);
    return 0;
}
int binary()
{
    int c, first, last, middle, n, search, array[50];
    printf("Enter number of elements\n");
    scanf("%d", &n);
    printf("Enter %d integers\n", n);
    for (c = 0; c < n; c++)
        scanf("%d", &array[c]);
    printf("Enter value to find\n");
    scanf("%d", &search);
    first = 0;
    last = n - 1;
    middle = (first + last) / 2;
    while (first <= last)
    {
        if (array[middle] < search)
            first = middle + 1;
        else if (array[middle] == search)
        {
            printf("%d found at location %d.\n", search, middle + 1);
            break;
        }
        else
            last = middle - 1;
        middle = (first + last) / 2;
    }
    if (first > last)
        printf("Not found! %d isn't present in the list.\n", search);
    return 0;
}