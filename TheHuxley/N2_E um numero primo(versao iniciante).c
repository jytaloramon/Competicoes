#include "stdio.h"
#include "stdlib.h"
#include "math.h"

void main(){
    
    int nu, i, q;

    do{
        q = 0;
        scanf("%d", &nu);
        if( nu % 2 == 0 && nu != 2 || nu == 1){
            printf("0\n");
            continue;
        }
        for(i = 3; i <= sqrt(nu); i = i+2){
            if( nu % i == 0){
                q++;
            }
        }
        if( q == 0 && nu != -1){
            printf("1\n");
        }
        else if(nu != -1){
            printf("0\n");
        }
    } while(nu != -1);

}