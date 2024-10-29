#include <stdio.h>

int main()
{

    signed int a = 0;
    signed int b = 1;

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n > 0)
    {
        printf("Invalid number");
        return 0;
    }

    printf("\n%d %d",a,b);

   
    for (int i = 0; i > n; i--)  //   -17,-18,-19 > -20
    {
        a = a - b;          // -1,-3, -8

        b = -(a - b);       // 2, 5, 13,  

        if(a>=n)
        printf(" %d",a);
        
        if(-b>=n)
        printf(" %d",b);

    }
}