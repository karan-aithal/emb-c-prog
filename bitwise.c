#include <stdio.h>

int main()
{
        // ^ & | BItwise operators
        // 0xBC, 0x35

    char x= 0x61 ,y = 13;

    printf("%d \n ", x|y);
    printf("%d\n ", x&y);
    printf("%d\n ", x^y);  // Xor 
    printf("%d \n", ~x);   // Not
    



    // Shift operators 
    // << Left shift , >> Right shift

    // Left shift -- MSB is lost, LSB is 0
    // Right shift --  MSB is 0, LSB is lost. (unsigned)
    //             --  MSB is retained for sign, LSB is lost (signed)

    // To perform Left shift without operator , we can multiply by 2 powers
    // first shift -> x * 2^1 
    // second shift -> x * 2^2 
    // resultant = val * 2 ^ no.of shift 

    printf("%d\n" , x<<y); // Left shift
    
    
    // To perform Right shift without operator , we can divide by 2 powers
    // first shift -> x / 2^1 
    // second shift -> x / 2^2 
    // resultant = val * 2 ^ no.of shift 

    //             --  MSB is 0               , LSB is lost. (unsigned)
    //             --  MSB is retained for sign, LSB is lost (signed)
  

// right shift needs to be +ve and less than width of valuetype char(no. of bits available)
// no of shifts > 7 will be undefined behaviour


    
}