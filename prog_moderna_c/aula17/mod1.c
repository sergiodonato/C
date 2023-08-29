#include <stdio.h>

int i = 10;

int main(void) {

  printf("%d\n", i);
  extern void inc_i(void);
  inc_i();
  printf("%d\n", i);

  return 0;
}
