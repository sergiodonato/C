#include <stdio.h>
#include <string.h>

union st {
  unsigned char id;
  unsigned int num;
};

int main(void) {

  union st s[10];

  s[0].id = 3;
  s[0].num = 2017;

  printf("s.id : %d\n", s[0].id);
  printf("s.num: %d\n", s[0].num);

  printf("sizeof(union st): %ld\n", sizeof(union st)); 

  memset(&s, 0, sizeof(union st)); // aloca/seta valores para os espaços de memória

  printf("s.id : %d\n", s[0].id);
  printf("s.num: %d\n", s[0].num);

  printf("sizeof(union st): %ld\n", sizeof(union st)); 

  return 0;
}
