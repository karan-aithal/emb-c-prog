#include <stdio.h>

/*
Logical Operators

&& || !

++ --

*/

int main()
{
    int a = 10, b = -30, c = 0;

    int expr = a || b;

    printf("%d OR %d -- %d\n", a, b, expr); // true

    int num1 = 1, num2 = 0;

    if (++num1 || num2++)
        printf("if num1: %d , num2: %d\n", num1, num2); //
    
    else
        printf("else num1: %d , num2: %d\n", num1, num2); //

<<<<<<< HEAD
    // Short circuit evaluation

    // skips executing 2nd expression num++, It never evaluates 2nd expression, therefore num++ is not executed
    // since 1st expression ++num1 is true
    
     if (++num1 || num2++)
        printf("if num1: %d , num2: %d\n", num1, num2); //
    
    else
        printf("else num1: %d , num2: %d\n", num1, num2); //
=======
    if(++num1 || num2++)
    {
        printf("if num1: %d , num2: %d\n" ,num1,num2); //   
    }
    else 
        printf("else num1: %d , num2: %d\n" ,num1,num2); //

// Short circuit evaluation

// skips executing 2nd expression num++, It never evaluates 2nd expression, therefore num++ is not executed 
// since 1st expression ++num1 is true
>>>>>>> 19c0da95a6d7c9627767abf75acdc7ca6b0f657a

    if(++num1 && num2++ )   // in case of AND , If first expresssion is false , it doesnot evaluate 2nd expression
    {
        printf("if num1: %d , num2: %d\n" ,num1,num2); //   
    }
    else 
        printf("else num1: %d , num2: %d\n" ,num1,num2); //


        // AND && has higher ranking/ Precedance than OR ||
        // Associativity is from left to right


/*
 int x =1, y=1 ,z =1
        = num1 || num2 || num3
        = (num1 || num2 ) || num3
        = 1 || not evaluated 

 int x =1, y=1 , z=1 
        = a || b && c && d
        = a || ((b && c) && d)
        = a || ((b && c) && d)
        = 1 || not evaluated


        = a && b || c && d
        =(a && b) ||(c && d)
        = 1 || not evaluated skipped

        group && variables before grouping || variables


        if (++num1 || ++num2 && ++num3)
            ++num1 || (++num2 && ++num3)
            1 || not evaluated


        int x =1, y=1 , z=1 
        z++ || ++y && ++z && ++ z
        z++ || ((++y && ++z) && ++ z++)
        A || B
        0++ || evaulated ((++y && ++z) && ++ z++)


        int x =-1, y=-1 , z=-1 
        ++x && ++y || ++z

        LOGICAL NOT
        x=1
        x=!(++x)
        x=!(2)
        x=0

        x=!(x++)
        x=!() // Undefined Behaviour

        x!++ // compile time error
        
        










*/
       
}