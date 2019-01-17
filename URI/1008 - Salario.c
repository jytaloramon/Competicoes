#include "stdio.h"
#include "stdlib.h"

int main(){
	
	int a, b;
	float sala;
	scanf("%d%d%f", &a, &b, &sala);
	printf("NUMBER = %d\n", a);
	printf("SALARY = U$ %.2f\n", b*sala);
	
	return 0;
}