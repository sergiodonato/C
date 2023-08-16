#include <stdio.h>

int main(void) {
  
/*
  unsigned int i = 0;

// rotulador, "label", pode por qualquer nome...
imprimir:
  printf("O valor de i eh: %u\n", i);
  i++;
  if (i < 3)
    goto imprimir;
*/

// for, i declado no contexto do loop para economizar memória...
  for (unsigned i = 0; i < 3; i++) {
    printf("O valor de i eh: %u\n", i);
  }
  return 0;
}
