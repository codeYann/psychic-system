#include "mux.h"
#include "gates.h"

void decode_select_lines(int8_t select[3], int8_t control[8]) {
  control[0] = and_gate(and_gate(not_gate(select[0]), not_gate(select[1])),
                        not_gate(select[2]));
  control[1] =
      and_gate(and_gate(not_gate(select[0]), not_gate(select[1])), select[2]);
  control[2] =
      and_gate(and_gate(not_gate(select[0]), select[1]), not_gate(select[2]));
  control[3] = and_gate(and_gate(not_gate(select[0]), select[1]), select[2]);
  control[4] =
      and_gate(and_gate(select[0], not_gate(select[1])), not_gate(select[2]));
  control[5] = and_gate(and_gate(select[0], not_gate(select[1])), select[2]);
  control[6] = and_gate(and_gate(select[0], select[1]), not_gate(select[2]));
  control[7] = and_gate(and_gate(select[0], select[1]), select[2]);
}

int8_t mux(int8_t inputs[8], int8_t select[3]) {
  int control[8];
  decode_select_lines(select, control);

  int output = or_gate(or_gate(or_gate(and_gate(inputs[0], control[0]),
                                       and_gate(inputs[1], control[1])),
                               or_gate(and_gate(inputs[2], control[2]),
                                       and_gate(inputs[3], control[3]))),
                       or_gate(or_gate(and_gate(inputs[4], control[4]),
                                       and_gate(inputs[5], control[5])),
                               or_gate(and_gate(inputs[6], control[6]),
                                       and_gate(inputs[7], control[7]))));

  return output;
}