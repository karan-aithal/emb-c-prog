#include <stdio.h>
#include <stdbool.h>


bool isNthbitSet(int num , int n)
{
//  1.  Create a mask by left shift ‘1’ by ‘i’ positions to create a mask with only the ith bit set.
// 2.  Perform a bitwise AND operation between the decimal number and the mask.

//  3. If the result is non-zero, then the ith bit is set, otherwise it is not set.

// 4. The condition if the ith bit of n is set:

// (( n & ( 1 << ix ) != 0)
    int mask  = 1 << n; // create a mask with the nth position set to 1

    // use mask to find if nth element is set or not
     return ((num & mask) != 0) ? true : false;


}


int Clearnthbit(int num , int pos)
{

    int mask  = ~( 1 << pos); // create a mask with the nth position set to 0 and all other set 1 
    // mask = ~ mask;
    // not(mask)

    // use mask to set nth element and all others remain same
     return num & mask;

}


int main()
{

      int num, n, pos;

    printf("Enter a number");
    scanf("%d", &num);

    printf("Enter 'N':");
    scanf("%d, &n");

    printf("Enter a position:");
    scanf("%d", &pos);

   if( isNthbitSet(num,n))
   printf("Updated value of num is %d",num );

    else 
    {
      int ans = Clearnthbit(num,pos);

      printf("Updated value of num is %d",ans);

    }
}