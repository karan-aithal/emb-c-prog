#include<stdio.h>
// If n = 5, then,
// 5
// 4 5
// 3 4 5
// 2 3 4 5
// 1 2 3 4 5
// 2 3 4 5
// 3 4 5
// 4 5
// 5
int main()
{

    int num;
    printf("Enter a number :");

    scanf("%d",&num);

     for (int i = num; i >= 1 ; i--)
    {
        for (int j = i; j <= num ; j++)
        {
            //if (j <= num - i + 1 )    
            printf("%d ",j);
        }
        printf("\n");
    }


    for (int i = 2; i <= num ; i++)  // keep 1 to repeat the numbers  1 2 3 4 5 1 2 3 4 5 in middle
    {
        for (int j = 1; j <= num ; j++)
        {
            if (j <= num - i + 1 )    
            printf("%d ",j+i-1); // j+i-1 for starting each line with a incremented window
        }
        printf("\n");
    }

}