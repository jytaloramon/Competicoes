#include "stdio.h"
#include "stdlib.h"

int main(){
	
	int km;
	float b;
	scanf("%d %f", &km, &b);
	printf("%.3f km/l\n", km/b);
	
	return 0;
}
