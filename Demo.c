#include <stdio.h>

int main()
{

    int x = 1000;
    char ch ='y' ;
    float tf = 3.1412;
    double avg = 80.55 ;
    int num;

    printf("%zu \n", sizeof(int));   // Size of int depends on system word size

    printf("%d \n", sizeof(x));   // Size of integer 
    
    printf("%d \n", sizeof(ch));  // Size of char

    printf("%d \n", sizeof(tf));  // Size of float
    
    printf("%lf \n", sizeof(avg));  //  Size of double

    // putchar();
    scanf("%d", &num); //

printf("%d \n", num); 

return 0;
//   Execute in Windows
//   gcc Demo.c
//    ./a.exe

}