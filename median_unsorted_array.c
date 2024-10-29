#include <stdio.h>

// P is the pivot element.
// int *p;
// L is the left pointer.
// int *l;
// R is the right pointer.
// int *r;

void quickSort(int arr[], int first, int last)    // Divide and conquer - Large Datasets
{
    int i, j, pivot, temp;

    if (first < last)
    {
        pivot = first; // Pivot element can be selected as the first / last or random
        //    int n = r - l + 1;
        //    int pivot = rand() % n;
        i = first;
        j = last;

        while (i < j)
        {
            while (arr[i] <= arr[pivot] && i < last - 1) // check left side, for large numbers than pivot
                i++;                                     // check if array of i (first) <= array of pivot

            while (arr[j] > arr[pivot] && j >= first + 1) // Check right side of pivot, for small numbers than pivot
                j--;

            if (i < j) // swap numbers if right side is less than left side
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        // Swap j th value to pivot element since arr[j] > arr[pivot]
        // Partition into 2
        temp = arr[pivot];
        arr[pivot] = arr[j];
        arr[j] = temp;

        quickSort(arr, first, j - 1); // Quick Sort on Left Partition
        quickSort(arr, j + 1, last);  // Quick Sort on Right Partition
    }
}

void readArray(int arr[], int n)
{
    printf("\nEnter the array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void printArray(int arr[], int n)
{
    printf("\nArray elements are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int n;
    int median;

    printf("\nEnter the size\n");
    scanf("%d", &n);
    // call the function ,using the 'address of' operator to pass in the address of each variable
    // swap(&a, &b);

    int arr[n];

    readArray(arr, n);
    printArray(arr, n);
    quickSort(arr, 0, n - 1);

    printArray(arr, n);

    if (n % 2 == 0)
        median = n / 2 + 1;
    else
        median = n / 2;

    printf("Median of Array is : %d", arr[median]);
    
    return 0;
}