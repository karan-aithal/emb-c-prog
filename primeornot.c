#include <stdbool.h>
#include <stdio.h>

bool primeorNot(int n) {

  if (n <= 1)
    return false;                   // Numbers less than or equal to 1 are not prime

  // for (int i=2; i*i<=n; i++) {

  for (int i = 2; i <= n / 2; i++) {
    if (n % i == 0)
      return false;                 // If divisible by any number, not prime
  }

  return true;                     // If no divisors found, it is prime
 }

int main() {
  int n;

  printf("Enter a number: ");
  scanf("%d", &n);

  if (primeorNot(n))
    printf("%d is a prime number\n", n);
  else
    printf("%d is not a prime number\n", n);

 return 0;
}
