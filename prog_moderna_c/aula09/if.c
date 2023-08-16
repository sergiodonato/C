#include <stdio.h>

int main(void) {

  int a = 359;

// ternario:
  (a ==3) ? puts("3") : puts("nao sei o valor de a");


  if (-1 == a && a < 400) {
    int chave = 3;
    printf("O resulado da chave eh: %d\n", chave);
  } else if (a == 359) {
    puts("a eh 359");
  }
  else
    printf("avalicao do if deu FALSE\n");

  printf("a: %d\n", a);

  return 0;
}
