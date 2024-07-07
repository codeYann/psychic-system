#include <stdint.h>
#include <stdlib.h>

#include "gates/and_gate.c"

int main(int argc, char **argv) {

  int8_t a = 0, b = 1;

  And *gate = create(a, b);

  int8_t result = compute(gate);

  printf("and port => %d", result);

  return 0;
}