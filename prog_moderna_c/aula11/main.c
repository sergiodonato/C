#include <stdio.h>

int main(int argc, char *argv[]) {

  int i;
  printf("endereco de i: %p\ntamanho de i: %zu\n\n", &i, sizeof i);

  int *p = NULL; // para ele não apontar para nada
  printf("endereco de p: %p\ntamanho de p: %zu\n", &p, sizeof p);
  printf("conteudo de p: %p\n", p);
  puts("o tamanho sendo 8 bytes, indica que eh arquitetura 64 bites\n");

  // o conteudo de p recebe o enredeco de i...
  p = &i; // por i ser maior consegue receber o endereco
  printf("endereco de p: %p\ntamanho de p: %zu\n", &p, sizeof p);
  printf("conteudo de p: %p\n\n", p);

  *p = 9;
  printf("%d\n", *p);

  return 0;
}
