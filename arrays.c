#include<stdio.h>

int main()
{

// Arrays are a collection of simillar type of data
// User defined datatype

// Array declaration
int arr[5];

// Fixed length 
// datatype array_name[size]
// memory = size * sizeof(datatype_arr)
//        = size * sizeof(int)
//        = 5 * 4
//        = 20

// Array Initialization
int iarr[5] = {1, 2, 3, 4, 5};

// Partial Initialization with other having garbage value
char carr[5] = {};  // 5 

double darr[5]; // 40

// int iar[];  compile time error 


printf("%zu \n", sizeof(arr));
printf("%zu \n", sizeof(carr));
printf("%zu \n", sizeof(darr));


// Array name will return the base address/ starting location of array when accessed arr

// 

for (int i=0; i < 5;i++)
{
  carr[i] = arr[i]; 
}

for (int i=0; i < 5;i++)
{
    scanf("%d", &arr[i]);
}

for (int i=0; i < 5;i++)
{
    printf("%d", arr[i]);
}


}