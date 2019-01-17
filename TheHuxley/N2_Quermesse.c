#include "stdio.h"
#include "stdlib.h"

int main(){
	
	int cont = 1, i, j, vet, nu;
	
	do{
		scanf("%d", &i);
		for(j = 0; j < i; j++){
			scanf("%d", &vet);
			if(vet == i+1){
				nu = vet;
			}
		}
		if(i == 0){
			break;
		}
		printf("Teste %d\n%d\n",cont++, nu);
	}while(1);
	
	return 0;
}