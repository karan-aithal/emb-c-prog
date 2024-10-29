#include <stdbool.h>
#include <stdio.h>

void swap(int arr[], int arr1[]);

float median(int *arrptr, int n);


void readArray(int *arrptr, int n);

void bubbleSort(int arr[],
                int last) //  a loop within a loop - Smaller Datasets
{
  bool swapped;

  for (int i = 0; i < last - 1; i++) { // 0 1 2 3 4 5

    swapped = false;
    for (int j = 0; j < last - 1 - i;
         j++) { // 0 1 2 3 4 5 ,  0 1 2 3 4  , 0 1 2 3 , 0 1 2 , 0 1

      if (arr[j] > arr[j + 1]) {

        swap(&arr[j + 1], &arr[j]);
        swapped = true;
      }
    }
    // If no swapped by inner loop,
    // then break
    if (swapped == false)
      break;
  }
}

void swap(int *arrp1, int *arrp2) {
  int temp = *arrp1;
  *arrp1 = *arrp2;
  *arrp2 = temp;
}

void readArray(int *arrptr, int n) {
  for (int i = 0; i < n ; i++) {

    scanf("%d", &arrptr[i]);

    // arrptr[i]
    /* B + OFFSET = 5 () You are pointing to the same region as B[OFFSET] */
    // *(B + 2) = 5;
  }
}

float median(int *arrpt, int n) {
  
  if (n % 2 == 0)
    return (float)(arrpt[n / 2] + arrpt[(n / 2) - 1]) / 2;
  else
    return (float)arrpt[n / 2] ;


}

//printArray(arr, n);

int main() {
  
    int na, nb;

    printf("\nEnter the 'n' value for Array A:\n");
    scanf("%d", &na);
    
    printf("\nEnter the 'n' value for Array B:\n");
    scanf("%d", &nb);
    
    // call the function ,using the 'address of' operator to pass in the address of each variable
    // swap(&a, &b);

    int arr1[na];
    int arr2[nb];
    
    printf("\nEnter the elements one by one for Array A: \n");
    readArray(arr1, na);
    
    printf("\nEnter the elements one by one for Array B: \n");
    readArray(arr2, nb);
    
    //printArray(arr, n);
    
    bubbleSort(arr1, na);
    bubbleSort(arr2, nb);

    float m1,m2;
    m1 = median ( arr1,na);
    m2 = median ( arr2,nb);

    printf("Median of array1 : %g\n", m1);
    
    printf("Median of array2 : %g\n", m2);

    printf("\nMedian of both arrays : %g\n",(m1+m2)/2);
                                      
}