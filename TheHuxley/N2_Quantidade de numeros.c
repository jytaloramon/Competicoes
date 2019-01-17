#include "stdio.h"
#include "stdlib.h"

int main(){
	
	int nu;
	
	while(1){
		printf("Digite um numero (negativo para parar o programa):\n");
		scanf("%d", &nu);
		if(nu < -1){
			break;
		}
		printf("Numero: %d\n",nu);
	} 
	return 0;
}