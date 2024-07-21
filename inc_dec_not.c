#include<stdio.h>

//  Operators Precedence and Associativity in C





int main()
{
int x,res,res1;

x=10;
res = x++ + ++x;    // 10 + 12 = 22

x=10;
res1 = ++x + x++;  // 11 + 12 = 23

x=10;
printf("%d %d\n",res ,res1);
printf("%d %d %d %d\n",x++,++x,x++,++x);  // Output is unexpected  or Undefined Behaviour

res= x++ + ++x+x++;             // no syntax error -- Output is unexpected  or Undefined Behaviour
printf("%d\n",res);

x=10;
x=x++;  // undefined behaviour ,assigning to itself
printf("%d\n",x);   

x=10;
x=++x ;  // value of x is 10 itself , undefined behaviour
printf("%d\n",x);   

int num = 100; 
num = !!!!num; //
num = !(++num);
num = !(num++);
 
 num = !num || num ++;
 num = !num || !num && ++num;


}