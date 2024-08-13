#include <stdio.h>

int main()
{
    int num, n, pos;

    printf("Enter a number");
    scanf("%d", &num);

    printf("Enter a position:");
    scanf("%d", &pos);

    printf("Enter no. of bits");
    scanf("%d", &n);

    num = num >> (pos-1);

    int set = (1 << n)-1;  // Left shift 1111 - 'n' times to get 1111 0000

    num = num & set;
    printf("%d",num);

}