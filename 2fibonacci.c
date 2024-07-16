#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Invalid number");
        return 0;
    }

    int a = 0;
    int b = 1;

    printf("\n%d %d",a,b);

   
    for (int i = 0; i < n; i++)
    {
        a = a + b;

        b = a + b;

        if(a<=n)
        printf(" %d",a);
        
        if(b<=n)
        printf(" %d",b);

    }
}