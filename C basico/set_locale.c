#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 20 // usado para facilitar a manutenção do código em posterior mudança no tamanho das strings

int main(){
	setlocale(LC_ALL, "Portuguese"); // para usar acentos
	
	char origem[N] = {"Olá, mundo!"};
	char destino[N];
	
	printf("Antes do strcpy:\n");
	puts(origem);
	puts(destino);
	
	strcpy(destino, origem); // para alterar conteúdo de string
	
	printf("Depois do strcpy:\n");
	puts(origem);
	puts(destino);
}
