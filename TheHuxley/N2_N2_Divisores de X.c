#include <stdio.h>
#include <stdlib.h>

int main(){

	int N, i, t = 1;
	scanf("%d",&N);
	
	printf("%d\n",N);
	for(i = (N/2); i > 0; i--) {
		if(N%i == 0){
			printf("%d\n",i);
		}	
	}
	
	return 0;
}
