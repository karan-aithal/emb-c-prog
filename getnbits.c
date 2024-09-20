#include <stdio.h>

int main()
{
    int num, n, pos;

    printf("Enter a number");
    scanf("%d", &num); // Example number (binary 11101)

    printf("Enter a position:");
    scanf("%d", &pos); // Starting position = 5

    printf("Enter no. of bits");
    scanf("%d", &n);   // Number of bits = 3

    num = num >> (pos-n); // shift right 5-3= 2 positions , 00111 , Move desired bits to LSB

    int setMask = (1 << n)-1;  // Left shift 1111 - 'n' times to get 1111 0000
    // 0001 << 3
    // 1000 - 1
    // 0111        //  n bits set to 1 


    num = num & setMask;  // multiply with num to get those n bits from LSB
    //   000111   num right shifted pos-n
    // & 000111   setMask n bits
    //   000111   Result

    printf("%d",num);

}