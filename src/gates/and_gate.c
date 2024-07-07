#include "and_gate.h"
#include <stdio.h>
#include <stdlib.h>

And *create(int8_t a, int8_t b) {
  And *gate = (And *)malloc(sizeof(And));
  gate->a = a;
  gate->b = b;
  gate->opcode = "AND";
  gate->c = 0;

  return gate;
}

int8_t compute(And *gate) {
  if (gate == NULL) {
    printf("Gat can't be null!");
    return -1;
  }

  gate->c = gate->a & gate->b;

  return gate->c;
}
