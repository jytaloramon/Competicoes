#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int a;
	
    scanf("%d",&a);
     if( (a%4==0 && a%400==0) || (a%4==0 && a%100!=0)  )
        {
            printf("BISSEXTO\n");
        }
	else
	{
		printf("NAOBISSEXTO\n");	
	}    
	
}
