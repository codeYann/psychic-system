#include <stdint.h>

#ifndef MUX_H
#define MUX_H

void decode_select_lines(int8_t select[3], int8_t control[8]);
int8_t mux(int8_t inputs[8], int8_t select[3]);

#endif MUX_H