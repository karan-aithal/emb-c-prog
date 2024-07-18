#include <stdio.h>

int main()
{

    unsigned int i1;
    signed int i2;

    unsigned char ch1;
    signed char ch2;


    unsigned short sh;
    signed long ln;
    short signed c3;

     printf("unsigned int %zu\n", sizeof(i1));       // 4
     printf("signed int %zu\n", sizeof(i2));        // 4

     printf("%zu\n", sizeof(ch1));       // 1
     printf("%zu\n", sizeof(ch2));       // 1

     printf("unsigned short is %zu bytes \n", sizeof(sh));       // 2
     printf("signed long is %zu bytes \n", sizeof(ln));       // 4     
     printf("signed short is %zu bytes \n", sizeof(c3));       // 2


}