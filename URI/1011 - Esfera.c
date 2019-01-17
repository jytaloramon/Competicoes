#include "stdio.h"
#include "stdlib.h"

int main(){
	
	double a;
	scanf("%lf", &a);
	printf("VOLUME = %.3lf\n", (4/3.0) *  3.14159 * a*a*a);
	
	return 0;
}