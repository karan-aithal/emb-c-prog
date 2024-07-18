#include <stdio.h>

int main()
{
    long int x;
    long double y;
    short int z;
    // short float;
    long int a; // Typical way to declare a long integer
    int long b; // Equivalent, but less common
    long c;     // Equivalent to long int

    //
    // sizeof() -- is a operator and not a function
    // used to find bytes allocated for the datatype

    /*
    
    sizeof is a compile time operator
        --> it will return the value at compile time itself
        --> it will be only checking for the type
        --> it will never reflect or have ability to change the value of variable

    */
    printf("%zu\n", sizeof(int));         // 4
    printf("%zu\n", sizeof(short));       // 2
    printf("%zu\n", sizeof(long));        // 4
    printf("%zu\n", sizeof(float));       // 4
    printf("%zu\n", sizeof(double));      // 8
    printf("%zu\n", sizeof(char));        // 1
    printf("%zu\n", sizeof(x));           // 16
    printf("%zu\n", sizeof(long int));    // 4
    printf("%zu\n", sizeof(long double)); // 16
    printf("%zu\n", sizeof(y));           // 16

    float no = 2.5;
    printf("various size of float %zu : %zu : %zu \n", sizeof(float), sizeof no, sizeof 10.5); // 4: 4: 8
    //  by default decimal values are considered double
    // sizeof 10.5 -- 8
    // sizeof 10.5f -- 4

    char ch = 'a';
    printf("various size of character %zu : %zu : %zu \n", sizeof(char), sizeof ch, sizeof 'a'); // 1: 1: 4
    //  by default characters are converted to ASCII value
    // sizeof 'a' --> sizeof 97 --> 4

    int num1 = 10;
    int num2 = sizeof(++num1);
    int num3 = sizeof(num1 = 100);

    printf("num1 is %d \n num2 is %d\n num3 is %d\n", num1, num2, num3);

    int num = 0x47; // hex
    // int num = 24;    // dec
    // int num = 032;   // oct

    printf("decimal: %d\n", num);
    printf("hexa : %x\n", num);  // 4 bytes hexa
    printf("octal : %o\n", num); // octal
}