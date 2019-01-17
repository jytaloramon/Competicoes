#include "stdio.h"
#include "stdlib.h"

int main(){

	int i, j, linha, coluna, auxSoma, soma = 0;
	scanf("%d%d", &linha, &coluna);
	int campo[linha][coluna];
	for(i = 0; i < linha; i++){
		auxSoma = 0;
		for(j = 0; j < coluna; j++){
			scanf("%d", &campo[i][j]);
			auxSoma += campo[i][j];
		}
		if(auxSoma > soma){
			soma = auxSoma;
		}
	}
	for(j = 0; j < coluna; j++){
		auxSoma = 0;
		for(i = 0; i < linha; i++){
			auxSoma += campo[i][j];
		}
		if(auxSoma > soma){
			soma = auxSoma;
		}
	}
	printf("%d\n", soma);		
	return 0;
}