#include <stdio.h>
#include <stdbool.h> // para ter boleanos, while (true) == loop infinito...

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

/*
// for, i declado no contexto do loop para economizar memória...
  for (unsigned i = 0; i < 3; i++) {
    printf("O valor de i eh: %u\n", i);
  }

*/

/*
// while
  unsigned int i = 0;

  while(i <= 2)
    printf("O valor de i eh: %u\n", i++);
*/

// do while: sempre roda uma vez o comando:
  unsigned int i = 0;

  do
    printf("O valor de i eh: %u\n", i++);
  while(i <= 2);

  return 0;
}
