#include<stdio.h>
void main()
{   //Program By DK
    int a[10][10], transpose[10][10], i, j;
    // Assigning elements to the matrix
    printf("\nEnter matrix elements:\n");
    printf("Enter element : \n");
    for (i = 0; i < 4; ++i)
        for (j = 0; j < 4; ++j) 
            scanf("%d", &a[i][j]);
          // Finding the transpose of matrix a
    for (i = 0; i < 4; ++i)
        for (j = 0; j < 4; ++j) 
            transpose[j][i] = a[i][j];
    // Displaying the transpose of matrix a
    printf("\nTranspose of the matrix:\n");
    for (i = 0; i < 4; ++i)
        for (j = 0; j < 4; ++j) 
        {   
            printf("%d  ",transpose[i][j]);
            if (j == 4 - 1)
                printf("\n");
        }   //######DK##########
}
