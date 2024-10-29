#include <stdio.h>
#include <math.h>


void number2binary(int bin[], int n) // 15  
{
    // int bin[32];

    int i = 0;
    while (n>0) {
        
        bin[i] = n % 2;        // 15 % 2 = 1  ,  7 % 2 = 1 , 3 % 2 = 1 , 1 % 2 = 1 
        n = n / 2;              // 15 / 2 = 7  ,  7 / 2 = 3 , 3 / 2 = 1 , 1 / 2 = 0
        
        i++;
    }

}


int binary2Number(int bin[], int n)    // Example:  int binary[] = {0, 0, 1, 1}; 
{
    int i=0;
    int num=0;
    // int rem=0; //  use rem =rem/2 in loop if bin[] is  a int num

    for (int i = 0; i < n; i++) {

        num = num + (bin[i] * pow(2, i)); // 2^3 2^2 2^1 2^0 

    }

    return num;
}

//1100

int main()
{

int bin[32] ={0};
int num,n;

printf("Enter a number :");
scanf("%d", &num);


printf("Enter number of bits");
scanf("%d", &n);

number2binary(bin, num);

int dnum = binary2Number(bin,n);
    printf("the converted number is %d",dnum);

}
