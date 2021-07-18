#include <stdio.h>
void main()
{
    int mat[3][3];
    int i, j;
    printf("Enter Elements of Matrix\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d",&mat[i][j]) ;
        }
    }
    printf("\nRow major array: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf(mat[i][j]);
            printf(" row-%d \n",i + 1);
        }
    }
}