#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main(){
	
	int i = 3, nu, raise, tr = 0;
	scanf("%d", &nu);
	if(nu % 2 == 0){
		if(nu == 2){
			printf("SIM\n");
		}
		else{
			printf("NAO\n");
		}
		return 0;
	}
	raise = sqrt(nu);
	while(i <= raise){
		if(nu % i == 0){
			tr++;
			if(tr >= 1){
				printf("NAO\n");
				break;
			}
		}
		i += 2;
	}
	if(tr == 0){
		printf("SIM\n");
	}
}