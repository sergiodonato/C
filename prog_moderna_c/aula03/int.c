#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

int main(void) {

  int i = INT_MAX;
  unsigned int i2 = UINT_MAX;
  uint32_t i3 = UINT_MAX;
//uint16_t = USHRT_MAX // short i; uint8_t = UCHAR_MAX; long i(64 bits);
  long long i4 = LLONG_MAX;
//size_t i5 = 0; >> tipo do sizeof
//register int i = 0; >> colocar no registrador, ñ na RAM

  printf("O tamanho de i (int): %zu bytes / %zu bits \n", sizeof i, sizeof i * 8);
  printf("O valor de i: %d\n", i);
  
  printf("\n");

  printf("O tamanho de i2 (long int): %zu bytes / %zu bits \n", sizeof i2, sizeof i2 * 8);
  printf("O valor de i2: %u\n", i2);

  printf("\n");

  printf("O tamanho de i3 (long int): %zu bytes / %zu bits \n", sizeof i3, sizeof i3 * 8);
  printf("O valor de i3: %u\n", i3);

  printf("\n");

  printf("O tamanho de i4 (long long int): %zu bytes / %zu bits \n", sizeof i4, sizeof i4 * 8);
  printf("O valor de i4: %llu\n", i4);

  return 0;
}
