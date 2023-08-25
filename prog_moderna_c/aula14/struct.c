#include <stdio.h>
#include <string.h>

struct st {
  unsigned char id;
  unsigned int num;
};

int main(void) {

  struct st s[10];

  s[0].id = 3;
  s[0].num = 2017;

  printf("s.id : %d\n", s[0].id);
  printf("s.num: %d\n", s[0].num);

  printf("sizeof(struct st): %ld\n", sizeof(struct st)); 

  memset(&s, 0, sizeof(struct st)); // aloca/seta valores para os espaços de memória

  printf("s.id : %d\n", s[0].id);
  printf("s.num: %d\n", s[0].num);

  printf("sizeof(struct st): %ld\n", sizeof(struct st)); 

  return 0;
}
