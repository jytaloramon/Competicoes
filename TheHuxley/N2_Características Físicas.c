#include "stdio.h"
#include "stdlib.h"

int main(int argc, char const *argv[]){
	
	int auxIdade, maisVelho = 0, qtObjetivo = 0, totalPessoa = 0; 
	char corOlhos, sexo, corCabelo;

	while(1){
		scanf("%d %c %c %c", &auxIdade, &sexo, &corCabelo, &corOlhos);
		if(auxIdade == -1){
			break;
		}
		if(auxIdade > maisVelho){
			maisVelho = auxIdade;
		}
		if(sexo == 'f' && corOlhos == 'v' && corCabelo == 'l' &&auxIdade >= 18 && auxIdade <= 35){
			qtObjetivo++;
		}
		totalPessoa++;
	}

	printf("Mais velho: %d\n", maisVelho);
	printf("Mulheres com olhos verdes, loiras com 18 a 35 anos: %.2f", (float)qtObjetivo*100/totalPessoa);
	printf("%\n");


	return 0;
}