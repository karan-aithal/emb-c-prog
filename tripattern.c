#include<stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);
    int count = 1;

    for (int i = 1; i <=num ; i++)
    {   
        for(int j = 1; j <=num - i + 1 ; j++)
        {
            if(i > 1 && j > 1 && j < num - i + 1 ) // spaces 
                printf(" ");
                // 5-1-1 = 3
                // 5-2-1 = 2
                // 5-3-1 = 1
                // j < n-i-1  -- for (0 to n) for (0 to n-i)

                // j < n-i+1  -- for (1 to =n) for (1 to =n-i+1)
            else
                printf("%d ", count++);
            
            

        }       
        printf("\n");

    }

return 0;
}


//  // Loop to print the pattern
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n - i + 1; j++) {
//             // Check for the middle positions where spaces should be printed
//             if (i > 1 && j > 1 && j < n - i + 1) {
//                 printf("_ "); // Print space
//             } else {
//                 printf("%d ", num++); // Print the number
//             }
//          }



// // Loop to print the pattern
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n - i; j++) {
//             // Check for the middle positions where spaces should be printed
//             if (i > 0 && j > 0 && j < n - i - 1) {
//                 printf("_ "); // Print space
//             } else {
//                 printf("%d ", num++); // Print the number
//             }
//         }