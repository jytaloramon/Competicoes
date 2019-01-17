#include "stdio.h"
#include "stdlib.h"

int main(){

	int i, qt, totalCap = 0;
	char tamanho;

	for(i = 0; i < 7; i++){
		scanf("%d", &qt);
		getchar();
		scanf("%c", &tamanho);
		if(tamanho == 'p' || tamanho == 'P'){
			totalCap += (10*qt); 
		}
		else{
			totalCap += (16*qt);
		}
	}
	printf("%d\n", totalCap);
	printf("%d\n", (totalCap*2)/7);

	return 0;
}