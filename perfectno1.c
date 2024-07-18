#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number\n");
    scanf("%d",&num);

    printf("perfect numbers are\n");


// Prints all the numbers that are divisble by the entered number
// Finds the divisors of a natural number
// Factors of a given number


    for(int i = 1; i < num; i++)    // start loop by 1 else we get -- Division by zero-- error
    {
        if(num%i == 0)    // checks if number is divisible i.e remainder = 0
        {
            printf("%d ",i);
        }
        
    }

return 0;
}