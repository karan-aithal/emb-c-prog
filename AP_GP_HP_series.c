#include <stdio.h>

int main()
{

    // Arithematic Progression
    // Geometric Progression
    // Harmonic Progression

    
    /*
    
    AP : In mathematics, an arithmetic progression (AP) or arithmetic sequence is a sequence of numbers such that the difference between the consecutive terms is constant.
    For instance, the sequence 5, 7, 9, 11, 13, 15 ... is an arithmetic progression with common difference of 2.
    
    GP : In mathematics, a geometric progression, also known as a geometric sequence, is a sequence of numbers where each term after the first is found by multiplying the previous one by a fixed, non-zero number called the common ratio.
    For example, the sequence 2, 6, 18, 54, ... is a geometric progression with common ratio 3. Similarly 10, 5, 2.5, 1.25, ... is a geometric sequence with common ratio 1/2.
    
    HP : In mathematics, a harmonic progression (or harmonic sequence) is a progression formed by taking the reciprocals of an arithmetic progression.

    */
  int a , r, n;
   int nxt;
   
   //printf("Enter the First Number 'A': ");
   scanf("%d", &a);
   //printf("Enter the Common Difference / Ratio 'R':");
   scanf("%d", &r);
    //printf("Enter the number of terms 'N':");
    scanf("%d", &n);
    
    if (n>1)
    {
        printf("\n");
    printf("AP = %d, ",a);
    nxt = a;

    for (int i=0; i <n-1; i++)
    {   
        printf("%d, ", nxt + r);
        nxt = nxt + r;
    }
    printf("\n");
    
    
    printf("GP = %d, ",a);
    nxt = a;

    for (int i=0; i <n-1; i++)
    {   
        printf("%d, ", nxt * r);
        nxt = nxt * r;
    }
    
    printf("\n");
    
    printf("HP = %f, ", (float)1/(a));
    float nx = a;

    for (int i=0; i < n-1; i++)
    {   
        printf("%f, ", 1/(nx + r));
        nx = nx + r;
    }
    
    }
    else
    printf("Invalid Input\n");
}