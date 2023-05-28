#include <stdio.h>
#include <string.h>
#include <locale.h>

#define TAM 50

struct tipo_pessoa{
	int idade;
	float peso;
	char nome[TAM];
};

// renomeado para poder usar de forma como um conjunto:
typedef struct tipo_pessoa tipo_pessoa;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	// Criando a variável, e inicializando:
	tipo_pessoa pes = {0, 0.0, "Teste"};
	
	printf("Início:\n");
	printf("pes.idade: %d\n", pes.idade);
	printf("pes.peso: %.2f\n", pes.peso);
	printf("pes.nome: %s\n", pes.nome);
	
	// Atribuindo valores aos campos:
	pes.idade = 10;
	pes.peso = 38.0;
	strcpy(pes.nome, "Texto");
	
	printf("\nAlterando os campos via código:\n");
	printf("pes.idade: %d\n", pes.idade);
	printf("pes.peso: %.2f\n", pes.peso);
	printf("pes.nome: %s\n", pes.nome);
	
	// Solicitando inserções via teclado:
	printf("\nInsira um número inteiro:\n");
	scanf("%d", &pes.idade);
	fflush(stdin);
	printf("Insira um número real:\n");
	scanf("%f", &pes.peso);
	fflush(stdin);
	printf("Insira uma palavra:\n");
	scanf("%s", &pes.nome);
	
	printf("\nAlterando com dados do usuário:\n");
	printf("pes.idade: %d anos\n", pes.idade);
	printf("pes.peso: %.2f kg\n", pes.peso);
	printf("pes.nome: %s\n", pes.nome);
	
}
