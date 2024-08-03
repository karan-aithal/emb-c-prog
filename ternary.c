#include<stdio.h>
# include<stdbool.h>

int main()
{
//   Ternary operator --> 
//
//        expression ? true_statement : false_statement
bool j;
j = 1 ? 1 ? 2 && 3: 4 ? (5 % 6) : 7 : 8; 
// ?:, &&, % , = , != , == , -- %  has highest precedance so group it first
// evaluate != == -- left to right 
//  evaluate ?: ternary using right to left

j = 1 ? (1 ? (2 && 3): (4 ? (5 % 6) : 7 )): 8; 
 
// Solving is left -> right 


j = 5 < 8 ?1!=2<5 == 0 ? 10 : 20 : 30;
 // < 
 // !=
 // ==
// ? :

int i = 0;
j = i++ ? i++ : ++i;
printf("i:%d j:%d\n", i, j);

j = i++ ? i++, ++j:++j,i++;
printf("i:%d j:%d\n", i,j);
// , = ?:
}