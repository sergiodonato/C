#include <stdio.h>
#include "poligonos.h"

int main(int argc, char *argv[]) {

	printf("%.2f.\n", calcAreaRetangulo(10, 10));
	
	printf("\nPerimetro do triangulo: %.2f.\n",
		calcPerimetroTriangulo(3, 4, 5));
}
