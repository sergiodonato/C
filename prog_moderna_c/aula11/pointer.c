#include <stdio.h>

void imprime(char *s) {

  while (*s != '\0')
    putchar(*s++);
}

int main(void) {
  
/*
  int a[] = { 2017, 2019, 2021 };

  for(int i=0; i<3; i++) {
    printf("O valor eh: %d\n", a[i]);
    printf("O endereco eh: %p\n", &a[i]);
  };
*/

  char t[] = { 0x74, 0x65, 0x74, 0x65, 0x63, 0x6f, '\n', 0x00 };
  puts(t);

  imprime(t);


  return 0;
}
