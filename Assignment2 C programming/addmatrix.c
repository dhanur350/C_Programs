#include<stdio.h>
void main()
{
    int a[6][6], b[6][6], sum[6][6], i, j;
     printf("\nEnter elements of 1st matrix:\n");
    for (i = 0; i < 6; ++i)
        for (j = 0; j < 6; ++j) 
            scanf("%d", &a[i][j]);
    printf("Enter elements of 2nd matrix:\n");
    for (i = 0; i < 6; ++i)
        for (j = 0; j < 6; ++j) 
            scanf("%d", &b[i][j]);
    // adding two matrices
    for (i = 0; i < 6; ++i)
        for (j = 0; j < 6; ++j) 
            sum[i][j] = a[i][j] + b[i][j];
    // printing the result
    printf("\nSum of two matrices: \n");
    for (i = 0; i < 6; ++i)
        for (j = 0; j < 6; ++j) 
        {
            printf("%d   ", sum[i][j]);
            if (j == 6 - 1) 
                printf("\n");
        }
}