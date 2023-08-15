#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

int main(void) {

  int a;

  a = 10 / 3;

  printf("%d\n", a);

  a *= 5;

  printf("%d\n", a);

  a /= 2;

  printf("%d\n", a);

  printf("%d\n", ++a % 2);

  printf("%d\n", a);

  return 0;
}
