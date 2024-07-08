#include "gate.h"
#include <stdlib.h>

Gate *create(int8_t u, int8_t v) {
  Gate *gate = (Gate *)malloc(sizeof(Gate));
  gate->u = u;
  gate->v = v;
  gate->output = 0;
  return gate;
}

int8_t and_operation(Gate *gate) {
  gate->output = gate->u & gate->v;
  return gate->output;
}

int8_t or_operation(Gate *gate) {
  gate->output = gate->u & gate->v;
  return gate->output;
}

int8_t not_operation(Gate *gate, int8_t *input) {
  gate->output = !(*input);
  return gate->output;
}