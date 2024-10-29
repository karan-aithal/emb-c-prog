    #include<stdio.h>

    int main()
    {
        int num,i,count=0;
        int arr[10];  // Intialize array 

    // LENGTH OF ARRAY 
    // variable to store size of Arr
        int length = sizeof(arr) / sizeof(arr[0]);
// variable to store the size of Arr
    // int length = *(&arr + 1) - arr;

/*
Step 1: Divide the number by 2 through % (modulus operator) and store the remainder in array
Step 2: Divide the number by 2 through / (division operator)
Step 3: Repeat the step 2 until number is greater than 0
*/

    printf("Enter the number\n");

    scanf("%d", &num);

    for (i=0; i<length; i++)
    {
        while(num > 0)
        {
            arr[i] = num % 2;    // Remainder 
            // divivde by 2 and store remainder to convert decimal to binary
            
            if(arr[i])  // check if bit is 1 or 0 and count the 1s
            count++;

            num = num / 2;    // Next number
            // divide  until remainder is zero
        }
    }

    printf("Number of set bits = %d\n", count);

    if(count % 2 == 0)
    printf("Bit parity is Even\n");

    else 
    printf("Bit parity is Odd\n");

        

}