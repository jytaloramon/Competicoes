#include <stdio.h>
#include "stdlib.h"

int main(){

    char carac; 
    int i, l, al = 0, dist = 0, increment = 10, incrementLado = 10;
    scanf("%d", &l);
    getchar();

    for(i = 0; i < l; i++){
        scanf("%c", &carac);
        getchar();
        
        if(carac == 'S'){
            if(al < 2000) al += increment;

        } else if(carac == 'D'){
            if(al > 0) al -= increment;
        } 
        else if(carac == 'F'){
            if(al != 0 && dist < 2000 && dist > -2000) dist += incrementLado;
        
        } else{
            if(al != 0 && dist < 2000 && dist > -2000){ 
                dist += incrementLado;
                incrementLado *= -1;
            }
        } 
    }
    
    if(dist < 0) dist *= -1;
    
    printf("%d %d\n", al, dist);

    return 0;
}