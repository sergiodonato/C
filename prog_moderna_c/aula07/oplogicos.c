#include <stdio.h>

/*
  0 = falso
  1 = verdadeiro
 
  Conjuncao (E, AND) = &&
  0 0 - 0 
  0 1 - 0
  1 0 - 0
  1 1 - 1 

  Disjuncao (OU, OR) = ||
  0 0 - 0
  0 1 - 1
  1 0 - 1
  1 1 - 1
*/

int main(void) {

  int a = 8;
  int b = 8;

  printf("O resulado eh: %d\n", !(a == b));


  return 0;
}
