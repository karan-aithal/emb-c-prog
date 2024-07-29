#include<stdio.h>

int main()
{
    float x = 0.7;

    printf("%.10f \n, %.10f \n", x ,0.7); // here x prints value 0.699999881 instead of 0.7000000000
    // Float has not good precision or accuracy for never ending numbers

    // Use Double to increase precision


    if(x==0.7)
    printf("yes they are equal\n");

    else 
    printf("No , not equal\n");

    
    int num1 = 1, num2 = 2;
    float num3 = 1.7, num4 = 1.5;

    num1 += num2 += num3 += num4;  // Evaluated from Right to Left


    printf("num1 is %d\n", num1);


    // Find out the print f
return 0;
}