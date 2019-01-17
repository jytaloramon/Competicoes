#include "stdio.h"
#include "stdlib.h" 
#include "ctype.h"

int formata(char *text){
	int i = 0, espaco = 1, maiuscula = 1, t = 0;
	if(text[i] == '*'){
		return 0;
	}
	while(text[i] != '\0' ){
		if(text[i] != ' '){   
			if((text[i] == 'e' || text[i] == 'E') && text[i+1] == ' '){
				text[t] = tolower(text[i]);		
			}  
			else if ((text[i] == 'D' || text[i] == 'd') && (text[i+1] == 'A' || text[i+1] == 'a' || text[i+1] == 'e' || text[i+1] == 'E' || text[i+1] == 'i' || text[i+1] == 'I'
			|| text[i+1] == 'o' || text[i+1] == 'O' || text[i+1] == 'u' || text[i+1] == 'U') && text[i+2] == ' '){
				text[t] = tolower(text[i]);
				text[++t] = tolower(text[++i]);
			}                                                                                                                                                    
			else if(maiuscula == 1){
				text[t] = toupper(text[i]);
				maiuscula = 0;
			}
			else{
				text[t] = tolower(text[i]);
			}
			espaco = 0;
			t++;
		}
		else{
			if(espaco == 0){
				text[t] = ' ';
				espaco = 1;
				maiuscula = 1;
				t++;
			}
		}
		i++;
	}	
	text[t] = '\0';
	printf("%s\n", text);
	return 1;	
}

int main(){

	char palavra[202];

	do{
		gets(palavra);
	}while(formata(palavra) == 1);

	return 0;
}