#include <stdio.h>
#define MSG "Mensagem padrao"
#define QUAD(x) (x*x)
#define MAX(x, y) (x > y ? x : y)
#define MAX3(x, y, z) \
  (MAX(MAX(x, y), MAX(y,z)))

//uso para dev:
#define DEBUG

#define VAR(x) printf("A variavel "#x" tem valor: %d\n", x);

int main(void) {

  int contador = 90;

  printf("MSG: %s\n", MSG);
  printf("QUAD: %d\n", QUAD(6));
  printf("MAX: %d\n", MAX(3, 9));
  printf("MAX3: %d\n", MAX3(3, 9, 59));
  printf("LINHA: %d\n", __LINE__); //macro já definida no C
  printf("DATE: %s\n", __DATE__); 
  
#ifdef DEBUG
  printf("%s: Estou na linha %d\n", __TIME__, __LINE__);
  VAR(contador);
#endif

  return 0;
}
