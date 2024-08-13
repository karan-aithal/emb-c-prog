#include<stdio.h>


// Siege of Eratosthenes

int main()
{

    int n =0; // Max number
    printf("Enter a number\n");
    scanf("%d",&n); // scan 

    //array of max size
    int arr[n+1]; 

// load an array with n numbers 
    for(int i = 2; i<=n; i++)
    {
        arr[i]=i;
    }

// check the numbers from 2 to n^2 <= n (less than root of n)
// for n = 100, we check for upto less than 9, 9*9= 81 < 100 

    for(int i = 2; i*i <= n; i++)
    {
        if(arr[i]!=-1)
        {
            for (int j = i*2; j <=n; j=j+i )
                {
                        arr[j] = -1;
                }   
        
        // for i starts from 2 to less than n^2
        // i = 2, j => 4,6,8,10.....
        // i = 3, j => 6,9,12......
        // i = 4, j => 
        // Mark all the multiples of i as -1.
        // multiples of i => (i*2) 4, 4+2, 6+2, 8+2.....
        }

    }

    printf("Prime numbers are: \n");
	for(int i=2; i <= n; i++)
	{
		if(arr[i] != -1)
		{
			printf("%d ", i);
		}
	}
    
}