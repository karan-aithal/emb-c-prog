#include <stdio.h>
#include <stdbool.h>

int Clearnthbit(int num , int pos)
{

    int mask  = ~( 1 << pos); // create a mask with the nth position set to 0 and all other set 1 
    // mask = ~ mask;
    // not(mask)

    // use mask to set nth element and all others remain same
     return (num & mask);

}

int main()
{

    // To clear the bit at the ith index to 0, we need to first target the ith position.
    //  This can be done by creating a mask using 1 << i, this shifts 1 to the left i times setting the ith bit to 1 and all other bits to 0. 
    // We negate this mask to make all bits 1 except for the ith bits, which is now 0.

       int num, n, pos;

    printf("Enter a number");
    scanf("%d", &num);

    printf("Enter 'N':");
    scanf("%d, &n");
    
    printf("Enter a position:");
    scanf("%d", &pos);

    int ans = Clearnthbit(num,pos);

    printf("Setting Mth bit to 0 : %d", num);

}