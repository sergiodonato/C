#include <stdio.h>
#include <unistd.h>

int main(){
	
	int i;
	
	for(i=0; i<=10; i++){
		
		printf("%d ", i);		
		sleep(1);
		
		if(i == 4){
			printf("-4 do mal!- ");
			continue;
		}
		
		if(i == 5){
			break;
		}
	}
}
