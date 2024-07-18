#include <stdio.h>

int main()
{
    char ch = 'a';

    // printf("%d\n",ch);  // Prints ASCII value of a 
    // printf("%c\n",ch);

int n= 2;
int sum = 0;

    for(int i = 0 ; i<10; i+n)
    {
        // 0 + 2 + 5 + 9
       // 2 3 4 
       sum = sum + i;
       n++;
       continue;
    }
    
    printf("%d",sum);
return 0;

}


// Order placed by 2 people at same time how to handle
// if cart item is only one 