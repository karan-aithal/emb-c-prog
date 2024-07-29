#include<stdio.h>

int main()
{
 // Shift operators 
    // << Left shift , >> Right shift

    // Left shift -- MSB is lost, LSB is 0
    // Right shift --  MSB is 0, LSB is lost. (unsigned)
    //             --  MSB is retained for sign, LSB is lost (signed)

 // To perform Left shift without operator , we can multiply by 2 powers
 // To perform Right shift without operator , we can divide by 2 powers
    
// right shift needs to be +ve and less than width of valuetype char(no. of bits available)
// no of shifts > 7 will be undefined behaviour


// Masking 
// mask is value containing bits to set and bits to clear afte an OR or AND Operation

int position;
char value = 0x64;
unsigned char mask;

printf("Enter the position from 0 to 7\n");
scanf("%d", &position);


//generic_mask = value << position ;
mask = value << position;

//mask = ((1 << number_of_bits)-1)   // no of bits to be shifted

printf("%hhx \n", value | mask);  

// for Setting the bit we need to bitwise OR operation with mask 
// number | (1 << bit_position_to_set)

// for Clearing the bit we need to bitwise AND operation with mask 
// number & ~(1 << bit_position_to_clear)
// value & mask

// for toggleing we use bitwise XOR operation
// number ^ (1 << bit_position_to_flip)
// value ^ mask 


// for checking a bit is 0 or 1 in the given position 
//number & (1 << bit_position_to_check)
// & operator changes 0 if bit else the bit is 1

int position;
char value = 0xAA;
printf("Enter the posiiton from to 7 Xn");
scanf( "%d", &position);
if (value &(1 << position))
printf( "Set bit Xn");
else
printf("clear bit\n");
return 0;

}