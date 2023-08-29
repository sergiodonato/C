#include <stdio.h>
#include <stdlib.h>

// função de saida, caso de erro, com a saida para lugar devido aos erros... 
void error(char msg[]) {
  fprintf(stderr, "ERRO: %s\n", msg);
  exit(1);
}

int main(void) {

  int nasc;

  printf("Digite data de nascimento: ");
  scanf("%d", &nasc);

  if (nasc < 1)
    error("A data é menor q 1");
  else if (nasc < 1900)
    error("Vc eh mto velho");

  printf("Voce nasceu em %d\n", nasc);

  return 0;
}
