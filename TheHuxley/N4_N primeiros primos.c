#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char** argv) {

    int b=3,d,i=0,cont,a,j;
    float raz;
    
    scanf("%d",&cont);
    printf("2\n");
    
    while(i<cont-1)
    {
	      d=0;
        raz=sqrt(b);   
	      a=raz+1; 
        
        for(j=3;j<a;j+=2)
        {
            if(b%j==0)
            {
                d+=1;
            }
        } 
	      if(d==0)
	      {
            printf("%d\n",b);
            i++;
        }
	      b+=2;
    }
    
    return (EXIT_SUCCESS);
}

