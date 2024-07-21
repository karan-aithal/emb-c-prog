#include <stdio.h>



/*
Logical Operators

&& || !

++ --


*/

int main()
{
    int a = 10, b = -30, c = 0;


    int expr = a|| b;

    printf("%d OR %d -- %d\n" ,a,b,expr); // true

    int num1 = 1, num2 =0;

    if(++num1 || num2++)
    {
        printf("if num1: %d , num2: %d\n" ,num1,num2); //   

    }
    else 
        printf("else num1: %d , num2: %d\n" ,num1,num2); //

// Short circuit evaluation

// skips executing 2nd expression num++, It never evaluates 2nd expression, therefore num++ is not executed 
// since 1st expression ++num1 is true



}