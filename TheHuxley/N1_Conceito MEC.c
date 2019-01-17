#include <stdio.h>
#include <stdlib.h>


int main()
{
	int a,b;
	int c;
	
	scanf("%d%d",&a,&b);
	
	c=b/a;
	
	if(c<=8)
	{
		printf("A\n");
	}
	else if(c>=9 && c<=12)
	{
		printf("B\n");
	}
	else if(c>=13 && c<=18)
	{
		printf("C\n");
	}
	else
	{
		printf("D\n");
	}
	
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
