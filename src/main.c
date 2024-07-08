#include "lib/gate/gate.c"

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {

  int8_t a = 1, b = 1;

  Gate *gate = create(a, b);

  int8_t result = and_operation(gate);
  printf("and port => %d", result);

  return 0;
}