#include<stdio.h>
void main()
{
    int a[3][3], b[3][3], multiply[3][3], i, j;
     printf("\nEnter elements of 1st matrix:\n");
    for (i = 0; i < 3; ++i)
        for (j = 0; j < 3; ++j) 
            scanf("%d", &a[i][j]);
    printf("Enter elements of 2nd matrix:\n");
    for (i = 0; i < 3; ++i)
        for (j = 0; j < 3; ++j) 
            scanf("%d", &b[i][j]);
    // adding two matrices
    for (i = 0; i < 3; ++i)
        for (j = 0; j < 3; ++j) 
            multiply[i][j] = a[i][j] * b[i][j];
    // printing the result
    printf("\nmultiply of two matrices: \n");
    for (i = 0; i < 3; ++i)
        for (j = 0; j < 3; ++j) 
        {
            printf("%d   ", multiply[i][j]);
            if (j == 3 - 1) 
            printf("\n");
        }
}