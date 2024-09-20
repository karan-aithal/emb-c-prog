#include <stdio.h>

int main()
{
    int num = 0x12345678;

    int *iptr = &num;          // Interger Pointer stores 4 bytes = 2 digits
    char *cptr = (char *)&num; // Character pointer stores only 1 byte = 2 digits

    printf("%x\n", *iptr); // 12345678
    printf("%x\n", *cptr); // 78

    printf("%x\n", *iptr); // 12345678
    printf("%x\n", *cptr); // 12 

    
}