#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

int main(void) {

  //float f = 3e2; =  3 * 10² = 300
  float f = 1;
  double d = 1; // 2x float
  //long double >> 128bits ( 4x float)

  printf("O tamanho de f (float): %zu bytes / %zu bits \n", sizeof f, sizeof f * 8);
  printf("O valor de f: %f\n", f);

  printf("\n");

  printf("O tamanho de d (double): %zu bytes / %zu bits \n", sizeof d, sizeof d * 8);
  printf("O valor de d: %.2f\n", d);

  return 0;
}
