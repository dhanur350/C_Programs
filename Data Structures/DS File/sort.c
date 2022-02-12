#include <stdio.h>
#include <stdlib.h>
//bubble sort
void bubblesort(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = 1; j < n - i; j++)
        {
            if (arr[j - 1] > arr[j])
            {
                temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }
}
//selection sort
void selectionsort(int arr[], int n)
{
    int temp, min, i, j;
    for (i = 0; i < n; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                min = j;
            }
        }
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}
//insertion sort
void insertionsort(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        temp = arr[i];
        for (j = i - 1; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
                break;
        }
        arr[j + 1] = temp;
    }
}
//merge
void merge(int arr[], int l, int m, int r)
{
    int len, i, j, k, *c;
    len = r - l + 1;
    c = (int *)malloc(sizeof(int) * len);
    i = 0;
    j = l;
    k = m + 1;
    while (j <= m && k <= r)
    {
        if (arr[j] < arr[k])
        {
            c[i++] = arr[j++];
        }
        else
        {
            c[i++] = arr[k++];
        }
    }
    while (j <= m)
    {
        c[i++] = arr[j++];
    }
    while (k <= r)
    {
        c[i++] = arr[k++];
    }
    i = 0;
    while (l <= r)
    {
        arr[l++] = c[i++];
    }
}
//mergesort
void mergesort(int arr[], int l, int r)
{
    int m = (l + r) / 2;
    if (l < r)
    {
        mergesort(arr, l, m);
        mergesort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}
//partition the list
int partition(int arr[], int l, int r)
{
    int j = l + 1, k = r, temp;
    int num = arr[l];
    while (k >= j)
    {
        while (arr[j] < num)
            j++;
        while (arr[k] > num)
            k--;
        if (k > j)
        {
            temp = arr[j];
            arr[j] = arr[k];
            arr[k] = temp;
        }
    }
    temp = arr[k];
    arr[k] = arr[l];
    arr[l] = temp;
    return k;
}
//quicksort
void quicksort(int arr[], int l, int r)
{
    int m;
    if (r > l)
    {
        m = partition(arr, l, r);
        quicksort(arr, l, m - 1);
        quicksort(arr, m + 1, r);
    }
}
int temp;
void heapify(int arr[], int size, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if (left < size && arr[left] > arr[largest])
        largest = left;
    if (right < size && arr[right] > arr[largest])
        largest = right;
    if (largest != i)
    {
        temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;
        heapify(arr, size, largest);
    }
}
void heapSort(int arr[], int size)
{
    int i;
    for (i = size / 2 - 1; i >= 0; i--)
        heapify(arr, size, i);
    for (i = size - 1; i >= 0; i--)
    {
        temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;
        heapify(arr, i, 0);
    }
}
void heap()
{
    int arr[] = {1, 10, 2, 3, 4, 1, 2, 100, 23, 2};
    int i;
    int size = sizeof(arr) / sizeof(arr[0]);
    heapSort(arr, size);
    printf("printing sorted elements\n");
    for (i = 0; i < size; ++i)
        printf("%d\n", arr[i]);
}
void main()
{
    int i, n, *arr, choice;
    printf("Enter No. of elements:");
    scanf("%d", &n);
    printf("\nEnter %d elements:", n);
    arr = (int *)malloc(sizeof(int) * n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    while (1)
    {
        printf("\n #### Sorting Techniques ####");
        printf("\n-> 1 : to apply Bubble sort!");
        printf("\n-> 2 : to apply Selection sort!");
        printf("\n-> 3 : to apply Insertion sort!");
        printf("\n-> 4 : to apply Mergesort");
        printf("\n-> 5 : to apply Quicksort!");
        printf("\n-> 6 : to apply Heap Sort");
        printf("\n-> Any other number to exit!");
        printf("\n--> Enter your choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            bubblesort(arr, n);
            break;
        case 2:
            selectionsort(arr, n);
            break;
        case 3:
            insertionsort(arr, n);
            break;
        case 4:
            mergesort(arr, 0, n - 1);
            break;
        case 5:
            quicksort(arr, 0, n - 1);
            break;
        case 6:
            heap();
            break;
        default:
            exit(0);
        }
        printf("\n\tSorted Numbers: \n");
        for (i = 0; i < n; i++)
            printf("|_%d_|", arr[i]);
    }
}