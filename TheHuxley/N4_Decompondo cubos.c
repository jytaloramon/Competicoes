#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){

    int nu, i, cubo, j, quad, incr, t;

    scanf("%d", &nu);

    for(i = 1; i <= nu; i++){
        scanf("%d", &cubo);
        quad = cubo*cubo;
        if(cubo%2 == 0){
            quad +=1;   
            incr = 0;    
        }
        else{
            incr = 1;
        }
        t = quad-cubo+incr;
        printf("caso %d:", i);
        for(j = 0; j < cubo; j++){
           printf(" %d", t);
           t += 2; 
        }
        printf("\n"); 
    }
}