#include <stdio.h>

int main(void) {
  signed char c;
  unsigned char c2;
  char c3;

  printf("O tamanho do tipo (char): %lu bytes / %lu bits \n", sizeof c, sizeof c * 8);

  c = 255;
  printf("O valor de c: %i\n", c);

  c2 = 255;
  printf("O valor de c2: %i\n", c2);

  c3 = 10;
  c3 = 0xa;
  c3 = '\n';
  printf("O valor de c3: %i\n", c3);

  return 0;
}
