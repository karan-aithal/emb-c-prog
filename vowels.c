#include<stdio.h>

int main()
{
    char ch;
    
switch (ch)
{
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    printf( "vowel \n") ;
    break;
    
    default :
    printf( "Not vowel\n");

}

return 0; 
// successful termination return 0 -- termination status
// return - non zero unsuccessful termination

}