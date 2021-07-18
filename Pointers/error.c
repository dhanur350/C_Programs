# include<stdio.h>
int linear_search(int *arr[10], int n, int item)
{
	int i;
	for(i=0;i<n;i++)
    {
		if(*arr[i]==item)
		{
            break;
            printf("the element %d is found at location %d",*arr[i],i);
            return;
		}
	}
	if(*arr[i]!=item)
	{
		printf("Element %d is not found",item);
	}
}
int main()
{
	int arr[10], n, i, item;
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	printf("Enter the elements of the array : \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("The entered elements are : ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\nEnter the number which you want to check from the array is present or not : ");
	scanf("%d",&item);
	linear_search(arr[10], n, item);
	return 0;
}