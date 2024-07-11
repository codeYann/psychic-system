#include <stdint.h>

#ifndef GATES_H
#define GATES_H

int8_t and_gate(int8_t u, int8_t v);
int8_t or_gate(int8_t u, int8_t v);
int8_t not_gate(int8_t u);
int8_t xor_gate(int8_t u, int8_t v);

#endif // GATES_H