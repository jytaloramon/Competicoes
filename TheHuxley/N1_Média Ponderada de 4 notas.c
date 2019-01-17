#include <stdio.h>
#include <stdlib.h>

int main(){
	
	
	double a[4],total;
	scanf("%lf%lf%lf%lf",&a[1],&a[2],&a[3],&a[4]);
	total = ((a[1]*1) + (a[2]*2) + (a[3]*3) + (a[4]*4))/10;	
	if(total>=9)
	{
		printf("aprovado com louvor\n");
	}
    else if(total>=7 && total<9)
	{
		printf("aprovado\n");
	}
	else if(total>=3 && total<7)
	{
		printf("prova final\n");
	}
	else
	{
		printf("reprovado\n");
	}
	

	
}
