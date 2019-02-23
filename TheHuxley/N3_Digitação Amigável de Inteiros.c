#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int convert(char *st){
	int i = 0;

	while(st[i] != '\0'){
		if((st[i] < 48 || st[i] > 57) && (st[i] != 'l' && st[i] != 'O' && st[i] != 'o'))
			return 0;
		
		if(st[i] == 'o' || st[i] == 'O')
			st[i] = '0';
		else if (st[i] == 'l') {
			st[i] = '1';
		}
	    i++;
	}

	return 1;
}

int main(int argc, char const *argv[]){
	
	int i, end = 1, num;
	char numero[15];

	do{
		scanf("%[^\n]s", numero);
		getchar();
		end = strcmp(numero, "FIM");
		if(!end)
			continue;

		if(convert(numero)){
		    num = atoi(numero);
			printf("%d\n", num);
		} else
			printf("ERRO\n");

	} while (end);

	return 0;
}