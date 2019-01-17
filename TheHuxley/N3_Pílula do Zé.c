#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int a,b,minuto[3],d=0,i;
	
    scanf("%d%d",&a,&b);
	  minuto[1] =(a*60)+b;
		if(minuto[1]<720){
			d +=1;
			printf("v\n");
		}	
		else
		{
			printf("f\n");
		}	
    
	  scanf("%d%d",&a,&b);
	  minuto[2] =(a*60)+b;
		if(minuto[2]-minuto[1]==192)
		{	
			d +=1;
			printf("v\n");
		}
		else
		{
			printf("f\n");
		}
    
	  scanf("%d%d",&a,&b);
		minuto[3]= (a*60)+b;
		if(minuto[2]-60==minuto[3])
		{	
			d +=1;
			printf("v\n");
			
		}
		else
		{
			printf("f\n");
			
		}
    
		switch(d)
		{
			case 3: printf("sucesso");break;
			default:printf("falha");break;
		}
	
}
