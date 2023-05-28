#include <stdio.h>

int main(){
	
	int d;
	
	printf("Insira um valor de 1 a 7:\n");
	scanf("%d", &d);
	
	switch(d){
		case 1:
			printf("Dom.\n");
			break;
		case 2:
			printf("Seg.\n");
			break;
		case 3:
			printf("Ter.\n");
			break;
		case 4:
			printf("Qua.\n");
			break;
		case 5:
			printf("Qui.\n");
			break;
		case 6:
			printf("Sex.\n");
			break;
		case 7:
			printf("Sab.\n");
			break;
		default:
			printf("Valor inválido.\n");
			break;
	}
}
