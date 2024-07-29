#include<stdio.h>

int main()
{
    int num;

    printf("Enter a number:");
    scanf("%d", &num);

    for(int i = 1; i <=num ; i++)  // rows
    {
        for(int j = 1; j <=num ; j++) // columns
        {
           
            if(j==i)    // prints Left --> Right Diagnol
            printf("%d", i);
            
            else if(j == (num - i + 1)) // prints Right --> Left Diagnol 
            // num - i + 1 
            // 4 - 1 + 1 = 4    -- row 1 
            // 4 - 2 + 1 = 3    -- row 2
            // 4 - 3 + 1 = 2    -- row 3 
            // 4 - 4 + 1 = 1    -- row 4 
            //  prints right to left diagnol when 
            // j == 4, 3, 2, 1
            
            printf("%d", j);
            
            else 
            printf(" "); //else prints space
        }
        printf("\n");// new line for every i th row 
    }
    return 0;
}