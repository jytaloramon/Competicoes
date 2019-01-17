#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int a,b,d;
	scanf("%d",&a);
	int c[a];
	for(b=0;b<a;b++)
	{
		scanf("%d",&c[b]);
	}
	
	for(b=a-1;b>=0;b--)
	{
		printf("%d ",c[b]);
	}
	
	return 0;
}
