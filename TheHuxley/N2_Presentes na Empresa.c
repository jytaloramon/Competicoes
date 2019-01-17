#include "stdio.h"
#include "stdlib.h"

int main(){
	
	int t, a ,i;
	double total;
	scanf("%d%d", &a, &i);
	total = a*10+i*8.5;
	printf("%.2lf\n%.2lf", total, total/(a+i));
	
	return 0;
	
}