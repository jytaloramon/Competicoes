#include <stdio.h>
#include <stdlib.h>
int main (){

	float a,b,d;
	char z[100];
	gets(z);
	scanf(" %f %f",&a,&b);
	d=a+((b*15)/100);
	printf("TOTAL = R$ %.2f\n",d);
}