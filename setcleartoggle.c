#include <stdio.h>

int main()
{
    unsigned int num, n, pos;

    printf("Enter a number");
    scanf("%u", &num); // Example number (binary 11101)

    printf("Enter no. of bits");
    scanf("%u", &n);   // Number of bits = 3

    printf("Enter a position:");
    scanf("%u", &pos); // Starting position = 5

        //  Move desired bits to LSB
        // setMask to select and get those numbers from num 

    num = num >> ((pos-n)+1); // shift right 5-3= 2 positions , 00111 , Move desired bits to LSB
 //   5 4 3 2 1 0
 ///    4 3 2 
// 01 1111 >> 2
// 00 0011
// & 0111 (getMask) 0111
//      0011

    unsigned int toggleMask = ((1 << n)-1)<< pos;  // Left shift 1111 - 'n' times to get 1111 0000
    // 0001 << 3
    // 1000 - 1
    // 0111        //  n bits set to 1 


    num = num & toggleMask;  // multiply with num to get those n bits from LSB
    //   000111   num right shifted pos-n
    // & 000111   setMask n bits
    //   000111   Result

    printf("Result = %d\n",num);

}


//  3 2 1 0
//  1 1 1 1
//              >> 2 - 2 + 1 = 1
//  0 1 1 0 
//  
//
//