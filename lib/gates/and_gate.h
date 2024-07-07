#include <stdint.h>

#ifndef AND_GATE_H
#define AND_GATE_H

typedef struct {
  int8_t a;
  int8_t b;
  int8_t c;
  char *opcode;
} And;

And *create(int8_t a, int8_t b);
int8_t compute(And *gate);

#endif