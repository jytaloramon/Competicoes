#include "stdio.h"
#include "stdlib.h"

int main(){
	
	int mes, ano;
	
	scanf("%d%d", &mes, &ano);
	
	switch(mes){
	
		case 2:
			if( (ano%4==0 && ano%400==0) || (ano%4==0 && ano%100!=0)  )
			{
				printf("29\n");
			}
			else{
				printf("28\n");
			}
			break;
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10: 
		case 12:
			printf("31\n");
			break;
			
		case 4:
		case 6:
		case 9:
		case 11:
			printf("30\n");
			break;
	}
}
