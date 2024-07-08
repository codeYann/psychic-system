#include <stdint.h>

#ifndef GATE_H
#define GATE_H

typedef struct {
  int8_t u;
  int8_t v;
  int8_t output;
} Gate;

Gate *create(int8_t u, int8_t v);

int8_t and_operation(Gate *gate);
int8_t or_operation(Gate *gate);
int8_t not_operation(Gate *gate, int8_t* input);

#endif