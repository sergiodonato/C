#include <stdio.h>

void funcao(void) {
  static int i = 0;

  printf("%d\n", i++);
}

void funcao2(void) {
  int f = 0;

  printf("%d\n", f++);
}

int main(void) {
  funcao();
  funcao();
  funcao();

  printf("sem static o valor não se mantem\n");

  funcao2();
  funcao2();
  funcao2();
  return 0;
}
