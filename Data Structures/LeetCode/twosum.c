#include <stdio.h>
#include <stdlib.h>
int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    *returnSize = 2;                              // Output consist of 2 elements
    int *r = malloc((*returnSize) * sizeof(int)); // mallocing array r
    int i, j;                                     // declaring variable i and j
    for (i = 0; i < numsSize; i++)                // Initalizing the loop
    {
        for (j = i + 1; j < numsSize; j++) // Initializing one more loop
        {
            if (nums[j] == target - nums[i]) // Testing the conditions
            {
                r[0] = i;
                r[1] = j;
            }
        }
    }
    return r; // returning array r;
}
void main()
{
    *twoSum((2, 7, 11, 15), 4, 9, 2);
}