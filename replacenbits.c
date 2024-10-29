#include <stdio.h>

void clearnbits(unsigned int *num, int n) {

  int clearMask = ~((1 << n) - 1); // 0000 1111  -- 0111 1000 --> n bits set to 0

  // 1 << n           0000 0001  -- 0000 1000

  // Subtracting 1 turns all bits below the shifted 1 to 1
  // (1 << n) - 1    0000 1000 - 1 --=  0000 0111

// This inverts the bits so that the last n bits are 0 and the rest are 1.
//   ~((1 << n) - 1)   ~0000 0111 gives 1111 1000.


  *num = *num & clearMask; // clear n bits from LSB
}

int getnbits(unsigned int *num, int n) {
  unsigned int getMask = (1 << n)-1; // 0000 1111  -- 0111 1000 --> n bits set to
                                    // 0 ~() NOT of -- 1000 0111
  int nbit = *num & getMask;

  return nbit;
}

int replacenbits(unsigned int *num, int nbits) { return *num | nbits; }

int main() {

  unsigned int num, num2, n, pos;

  printf("Enter a number");
  scanf("%u", &num);

  printf("Enter no. of bits");
  scanf("%u", &n);

  // d. Fetch n number of bits from LSB end of val and replace in the last n
  // bits of num.

  printf("Enter new number to replace num with");
  scanf("%u", &num2);

  // Step 1: Clear n bits from LSB of num 1
  // Step 2: Get n bits from LSB end of num 2
  // Step 3: Replace those n bits in the LSB end of num 1

  clearnbits(&num, n);
  // pass address
  // store address in a pointer parameter
  // derefrence pointer

  int nbits = getnbits(&num2, n);

  int ans = replacenbits(&num, nbits);

  printf("Result =  %d\n", ans);
}