#include "comparator.h"

int8_t comparator(int8_t u, uint8_t v) {
  int8_t comp = 0;

  for (int i = 0; i < 8; i++) {
    comp |= xor_gate((u >> i) & 1, (v >> i) & 1);
  }

  return not_gate(comp);
}