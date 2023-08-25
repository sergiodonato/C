#include <stdio.h>
#include <stdlib.h>

#define TAM 2

enum pedras { CAVALO=2, BISPO, TORRE, RAINHA };//começa do valor 2

int main(int argc, char *argv[]) {

  int tabu[TAM][TAM] = { 0 };// se não zerar aparece conteudos aleatórios, caso ñ especifique o conteudo
  int i, j;

  tabu[0][0] = CAVALO;
  tabu[0][1] = BISPO;
  tabu[1][0] = TORRE;
  //tabu[1][1] = RAINHA; // é igual a chamada abaixo
  *(*(tabu+1) + 1) = RAINHA;

  for (i=0; i<TAM; i++) {
    for(j=0; j<TAM; j++) {
      printf("[%d][%d]=%d ", i, j, tabu[i][j]);
      if (j == TAM-1)
        putchar('\n');
    }
  }


  return 0;
}
