#include <stdio.h>

 int main()
 {
    int n,op;

    printf("Enter the value of 'n' : ");
    scanf("%d", &n);

    printf("Choose First Day : \n 1. Sunday \n 2. Monday \n 3. Tuesday \n 4. Wednesday \n 5. Thursday \n 6. Friday \n 7. Saturday\n");

    printf("Enter the option to set the first day :");
    scanf("%d", &op);
    int res = op;

    while (n>0)    // 7 1 - Saturday ,   5 4 - Sunday  4 4 - saturday , 5 0
    {             
        // Error: Invalid Input, n value should be > 0 and <= 365
        // res = op+n-1; // Add Last few days(<7) to start of weekday 5+4, 8, 5 
        // n = n - 7; // 9-7 = 2 // 8-7 = 1 , 

        int res = (op + (n % 7) - 1) % 7;  // n%7 = remaining days 
            op + (n%7)
        if (res > 8) // Wrap around if day exceeds Saturday (7)
            res = 1;
       
        n--;  
    } 
    
    switch(res)
    {
        case 1: printf("It is a sunday");
        break;

        case 2: printf("It is a Monday");
        break;

        case 3: printf("It is a Tuesday");
        break;

        case 4: printf("It is a Wednesday");
        break;

        case 5: printf("It is a Thursday");
        break;

        case 6: printf("It is a Friday");
        break;

        case 7: printf("It is a Saturday");
        break;

    }

 }