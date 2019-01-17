#include "stdio.h"
#include "stdlib.h"

int main(){
	
	int i, j;
	scanf("%d", &i);
	if(i % 2 ==1){
		i--;
	}
	while(i >= 0){
		printf("%d\n", i);
		i -= 2;
	}
	return 0;
}