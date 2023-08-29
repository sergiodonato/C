#include <stdio.h>

// tipo de retorno, nome(tipo do argumento, nome dos args)
int soma(int n1, int n2, int n3) {
  int res;
  res = n1 + n2 + n3;
  return res;
}

// função sem argumento
void tchau(void) {
  printf("tchau\n");
}

int main(void) {

  int num1, num2, num3;

  printf("Digite o num1: ");
  scanf("%d", &num1);
  printf("num1: %d\n", num1);

  tchau();

  printf("Digite o num2: ");
  scanf("%d", &num2);
  printf("num2: %d\n", num2);

  printf("Digite o num3: ");
  scanf("%d", &num3);
  printf("num3: %d\n", num3);

  printf("soma: %d\n", soma(num1, num2, num3));
  return 0;
}
