#include "stdio.h"
#include "stdlib.h"

typedef struct ALARME{
	int id;
	float temp;
	char cond_fumaca;
}ALARME;

int main(int argc, char *argv){

	int i, j, test, leitura;
	float soma;

	ALARME alarmes[100];

	scanf("%d", &test);

	for(i = 0; i < test; i++){

		scanf("%d", &leitura);
		soma = 0;

		for(j = 0; j < leitura; j++){
			scanf("%d %f %c", &alarmes[j].id, &alarmes[j].temp, &alarmes[j].cond_fumaca);
			soma += alarmes[j].temp;
		}

		soma /= leitura;

		printf("TESTE %d\n", (i + 1));
		for(j = 0; j < leitura; j++){
			if(alarmes[j].cond_fumaca == 'S' || alarmes[j].temp >= 40 || alarmes[j].temp * 100 / soma >=115) printf("%d\n", alarmes[j].id);
		}
	}

	return 0;
}
