#include <stdio.h>

int clearnbits(int num, int n)
{
    int clearMask = 1 << n;  // 0000 1111  -- 0111 1000 --> n bits set to 0
    num = num & clearMask;  // clear n bits from LSB
}

int getnbits(int num, int n)
{
    int getMask = 1 << 
}

int main()
{

    int num, num2, n, pos;

    printf("Enter a number");
    scanf("%d", &num);

    printf("Enter no. of bits");
    scanf("%d", &n);

    // d. Fetch n number of bits from LSB end of val and replace in the last n bits of num.


    printf("Enter new number to replace num with");
    scanf("%d", &num2);

    clearnbits(num,n);

    getnbits(num2,n);

    replacenbits();

    
}