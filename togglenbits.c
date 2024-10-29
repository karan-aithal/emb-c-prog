#include <stdio.h>

int main()
{
    unsigned int num, n, pos;

    printf("Enter a number");
    scanf("%u", &num); // Example number (binary 11101)

    printf("Enter no. of bits");
    scanf("%u", &n);   // Number of bits = 3

    printf("Enter a position:");
    scanf("%u", &pos); // Starting position = 5   ,, starts from 0 1 2 3 4 5 


    int toggleMask = ((1 << n)-1)<< pos;    // 0111
    //toggleMask = toggleMask << pos ;

    int result = num ^ toggleMask;
    
    printf("Result = %d\n",num);

}