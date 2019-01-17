#include "stdio.h"
#include "stdlib.h"

int main(){
	
	char palavra[100], letra;
	int i = 0, index = -1;
	scanf("%s %c", &palavra, &letra);
	
	while(palavra[i] != '\0'){
		if(palavra[i] == letra){
			index = i;
			break;
		}
		i++;
	}
	printf("%d\n", index);
	
	return 0;
}
