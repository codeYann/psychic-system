#include "adders.h"

void half_adder(int a, int b, int *sum, int *carry) {
  *sum = a ^ b;
  *carry = a & b;
};

int full_adder(int a, int b) {
  int prev = 0;

  while (b != 0) {
    prev = a;
    a ^= b;
    b = (prev & a) << 1;
  }

  return a;
}