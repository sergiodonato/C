#include <stdio.h>
#include <stdlib.h>
#include <string.h> // para usar memset

#define MALLOC(ptr, size) { \
  ptr = malloc(size); \
  if (ptr == NULL) { \
    fprintf(stderr, "memoria insuficiente\n"); \
    exit(1); \
  } \
}

void *malloc_s(size_t size) {
  void *ptr;
  ptr = malloc(size);
  if (ptr == NULL)
  {
    fprintf(stderr, "memoria insuficiente\n");
    exit(1);
  }
  return ptr;
}

int main(int argc, char *argv[]) {

  int *p, i;

  // para ser usado com a void
//  p = malloc_s(sizeof(int)); // para ser compilado independente da arquitetura

  // para ser usado com a define', *no caso usado 5x para 5 int
  MALLOC(p, 5 * sizeof(int));

  /*
  // para por valor por valor
  *p = 9;
  *(p+1) = 43;
  *(p+2) = 45;
  *(p+3) = 47;
  *(p+4) = 49;
  *(p+5) = 51; // esse ñ foi printado, por não ter sido alocado
*/

  // colocando todos valores como 0, inicializa a variavel
  memset(p, 0, 5 * sizeof(int));

/*
   // para chamar de forma unitária:
  printf("%d\n", *p);
  printf("%d\n", *(p+1));
*/

  // chamando com loop:
  for (i=0; i<5; i++) {
    printf("%d\n", *(p+i));
  }

/*
 // com realocação abre espaço para o print do valor "51"
  p = realloc(p, sizeof(int) * 6);
  printf("%d\n", *(p+5));
*/

  free(p);

  return 0;
}
