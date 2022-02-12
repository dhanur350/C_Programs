#include<stdio.h>
void main()
{   //Program By DK
    int trans(int [3][3]);
    int a[3][3], transpose[3][3], i, j;
    // Assigning elements to the matrix
    printf("\nEnter matrix elements:\n");
    printf("Enter element : \n");
    for (i = 0; i < 3; ++i)
        for (j = 0; j < 3; ++j) 
            scanf("%d", &a[i][j]);
            //######DK##########
    trans(transpose);
}
int trans(int transpose[3][3])
{
    int i,j,a[3][3];
    // Finding the transpose of matrix a
    for (i = 0; i < 3; ++i)
        for (j = 0; j < 3; ++j) 
            transpose[j][i] = a[i][j];
    // Displaying the transpose of matrix a
    printf("\nTranspose of the matrix:\n");
    for (i = 0; i < 3; ++i)
        for (j = 0; j < 3; ++j) 
        {   
            printf("%d  ",transpose[i][j]);
            if (j == 3 - 1)
                printf("\n");
        }
        return 1;
}
