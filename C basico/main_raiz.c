#include <stdio.h>

// argc = contador, argv = conteudo/ vetor de vetor de char
int main(int argc, char *argv[]){
	
	int i;
	
	if(argc > 1){
		printf("Foram inseridos %d argumentos:\n", argc);
		for(i= 0; i<argc; i++){
			printf("%s\n", argv[i]);
		}
	} else {
		printf("N�o foram inseridos argumentos no programa.\n");
	}
}