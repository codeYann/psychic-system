#include "mux.h"
#include "gates.h"

int8_t mux(int8_t inputs[8], int8_t select[3]) {
  int idx = (select[0] << 2) | (select[1] << 1) | select[2];

  if (idx < 0x00 || idx > 0x07) {
    return -1;
  }

  return inputs[idx];
}