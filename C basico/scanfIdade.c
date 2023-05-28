#include <stdio.h>

int main(){
	
	int idade = 0;
	int ano = 2023;
	char nome[11];
	
	printf("Valor inicial da idade: %d.\n", idade);
	
	printf("Digite uma idade e o ano:\n");
	scanf("%d %d", &idade, &ano);
	
	printf("Digite um nome:\n");
	scanf("%s", &nome);
	
	printf("Ano informado : %d.\n", ano);
	printf("Idade informada: %d.\nNome informado: %s.", idade, nome);
	
}
