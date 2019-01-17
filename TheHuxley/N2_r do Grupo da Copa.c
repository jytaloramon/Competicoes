#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char** argv) {
    int a[2],b[2],c[2],cont[1],aux;
    char nome1 [15],nome2 [15];;        
    scanf(" %s",&nome1);
        scanf(" %d",&a[1]);
        scanf(" %d",&b[1]);
        scanf(" %d",&c[1]);
    scanf(" %s",&nome2);
        scanf(" %d",&a[2]);
        scanf(" %d",&b[2]);
        scanf(" %d",&c[2]);
    
	cont [0]=strlen(nome1);
    cont [1]=strlen(nome2);
    
    
   if(a[1]>a[2]){
        
        for(aux=0;aux<cont[0];aux++)
	  {
    		printf("%c",tolower(nome1[aux]));
		}
        
    }
    
	else if(a[1]<a[2])
    {
        for(aux=0;aux<cont[0];aux++)
		{
    		printf("%c",tolower(nome2[aux]));
		}
    }
    
	else
    {
         if(b[1]>b[2])
        {
             for(aux=0;aux<cont[0];aux++)
			{	
    			printf("%c",tolower(nome1[aux]));
			}
        }
        
		else if(b[1]<b[2])
        {
             for(aux=0;aux<cont[0];aux++)
			{	
    			printf("%c",tolower(nome2[aux]));
			}
        }
        
		else
        {
            if(c[1]>c[2])
            {
                for(aux=0;aux<cont[0];aux++)
				{		
    				printf("%c",tolower(nome1[aux]));
				}
            }
            
			else if(c[1]<c[2])
            {
                for(aux=0;aux<cont[0];aux++)
				{		
    				printf("%c",tolower(nome2[aux]));
				}
            }
            
			else
            {
                printf("EMPATE");
            }
        }
        
    }
    printf("\n");
    
    
    return (EXIT_SUCCESS);
}
