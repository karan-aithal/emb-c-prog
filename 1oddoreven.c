#include <stdio.h>
#include <string.h>

int main()
{
    int n=0;
    printf("Enter the value of n\n");
    scanf("%d", &n);  

if (n == 0)
printf("%d is neither odd nor even", n);


else if (n>0)
{
    if (n%2 == 0)
    printf("The %d is EVEN positive number", n);

    else
    printf("The %d is ODD positive number", n);
}

else
{
    if(n%-2 == 0)
    printf("The %d is EVEN negative number", n);

    else
    printf("The %d is ODD negative number", n);

}
    
}