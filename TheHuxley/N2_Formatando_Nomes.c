#include "stdio.h"
#include "string.h"
#include "ctype.h"

char auxPala[201];


int formatPalavra(char *pala){
	int i, j = 0, maius = 0, podeEspa = 0;
	if(pala[0] =='*'){
		return 0;
	}
	for(i = 0; i < strlen(pala); i++){
		pala[i] = tolower(pala[i]);
		if(pala[i] != ' ' && maius == 0 && (pala[i-1] == ' ' pala[i] != 'e' && pala[i+1] == ' ' ||  ( pala[i-1] == ' ' && pala[i] != 'd' && pala[i+1] != 'a' && pala[i+1] != 'e' && pala[i+1] != 'i' && pala[i+1] != 'o' && pala[i+1] != 'u' && pala[i+2])))){
			auxPala[j] = toupper(pala[i]);
			maius = 1;
			podeEspa = 0;
			j++;
		}
		else if(pala[i] != ' ' && maius == 1){
			auxPala[j] = pala[i];
			podeEspa = 0;
			j++;
		}
		else if (podeEspa == 0){
			auxPala[j] = ' ';
			podeEspa = 1;
			maius = 0;
			j++;
		}		
	}
	auxPala[j] = '\0';
	return 1;
}

int main(){
	
	int i = 0;
	char pala[201];
	
	do {
		if(i != 0){
			printf("%s",auxPala);
		}
		gets(pala);
		i = 1;
		
	}while(formatPalavra(pala) != 0);
	
	return 0;
}
