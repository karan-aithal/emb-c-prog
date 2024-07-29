#include <stdio.h>

 int main()
 {
    int n,op;

    printf("Enter the value of 'n' : ");
    scanf("%d", &n);

    printf("Choose First Day : \n 1. Sunday \n 2. Monday \n 3. Tuesday \n 4. Wednesday \n 5. Thursday \n 6. Friday \n 7. Saturday\n");

    printf("Enter the option to set the first day :");
    scanf("%d", &op);
int res = 0;
    while (n>0)
    {   
        res = op+n;
        n = n - 8; // 9-7 = 2
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