#include <stdio.h>

int *modify(int *); // returns a pointer to array - arr

int main()
{
    // * ptr = *ptr + 10; //  *1000
    int num = 10;
    int arr[5] = {0, 10, 20, 30, 40};
    int *res;

    res = modify(&num, arr); // Pass by refrence - calling function by passing the address of variable (num)

    // Dynamic Data Allocation

    int num = 100;
    int *ptr;
    ptr = &num;
    printf("%p \n", &num); // address of num
    // printf("%p \n", *num); error
    printf("%p\n", ptr);  // address of num
    printf("%p\n", &ptr); //  refrencing pointer // address of pointer // Store value to pointed

    printf("%d\n", num);  // num = 100
    printf("%d\n", *ptr); // num = 100  // derefrencing pointer  // Fetch value pointed
}

int *modify(int *ptr, int arr[5]) // returns a pointer to array - arr,  
{
    *ptr = *ptr - 5;       //    *ptr(derefrencing) is used with &num
    for (int i = 0; i < 5; i++)
    {
        *(arr + i) += 10;
    }

    return arr; // arr -> return whole array with pointer -- 
    // Pointer Datatype

    // pointer arithmetic
    // value(p+i) = value(p) + 10;

    // ptr++;
    // ptr++ = ptr +  1*sizeof(int);
    // 1000 + 1 * 4;
    // 1004;

    // (*ptr)++;
    // *ptr = *ptr + 1;
    // *1000 = *1000 + 1;
    //  = 10 + 1
    //  = 11

    // arr[i] = *(arr + i);
    // *(ptr + i) = ptr[i];    ------- >
    //  *(ptr + 1) = *1004   + 4bytes
    //  *(ptr + 2) = *1008
    //  *(ptr + 3) = *1016

    // for char *ptr;
    // *(ptr + 1) = *1001    + 1bytes
    // *(ptr + 1) = *1002

    // a+b == b+a
    // ptr[i] == i[ptr]
    // arr[i] == i[arr]
}