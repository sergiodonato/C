#include <stdio.h>

/*
 * &
 * |
 * ^ xor
 * ~
 * <<
 * >>
*/

int main(void) {

  int a = 2; // 0b10
  int b = 3;

  printf("O resulado eh: %d\n", a & b);
  printf("O resulado eh: %d\n", a | b);
  printf("O resulado eh: %d\n", a ^ b);
  printf("O resulado eh: %d\n", a << 1); // dobra


  return 0;
}
