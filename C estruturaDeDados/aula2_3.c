#include <stdio.h>
#include <malloc.h> // alocação dinâmica de memória 

//  o código aloca dinamicamente memória para um inteiro,
// atribui o valor 20 a essa memória e, em seguida,
// imprime o valor armazenado nessa memória e o tamanho de um inteiro em bytes.

int main(){
	int* y = (int*) malloc(sizeof(int));
	*y = 20;
	int z = sizeof(int);
	printf("*y= %i, z= %i\n", *y, z);
}
