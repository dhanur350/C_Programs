#include <stdio.h>
void main()
{
	static int asc[10][10];
	int i, j, k, a;
	printf("***Enter elements of the matrix*** \n");
	for (i = 0; i < 4; ++i)
		for (j = 0; j < 4; ++j)
			scanf("%d", &asc[i][j]);
	printf("***After arranging rows in ascending order***\n");
	for (i = 0; i < 4; ++i)
	{
		for (j = 0; j < 4; ++j)
		{
			for (k = (j + 1); k < 4; ++k)
			{
				if (asc[i][j] > asc[i][k])
				{ // Swapping elements to ascending order...
					a = asc[i][j];
					asc[i][j] = asc[i][k];
					asc[i][k] = a;
				}
			}
		}
	}
	/* Print the elements in ascending order */
	for (i = 0; i < 4; ++i)
	{
		for (j = 0; j < 4; ++j)
		{
			printf(" %d", asc[i][j]);
		}
		printf("\n");
	}
}