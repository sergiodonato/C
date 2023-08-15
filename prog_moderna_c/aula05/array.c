#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

int main(void) {
  unsigned char c[3]; // de acordo com o tamanho da variavel, ocupa seu tamanho em casas de memória

  printf("O tamanho de c eh: %zu\n", sizeof  c);

  c[0] = 'A';
  c[1] = 0x42;
  c[2] = 67;

  printf("O tamanho 0 de c eh: %c\n", c[0]);
  printf("O tamanho 1 de c eh: %c\n", c[1]);
  printf("O tamanho 2 de c eh: %c\n", c[2]);

  printf("O endereco do array c em memoria: %p\n", c);
  printf("O endereco do array c em memoria: %p\n", &c);
  printf("O endereco do array c em memoria: %p\n", &c[1]);

  return 0;
}
