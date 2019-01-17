#include "stdio.h"
#include "stdlib.h"

int main(){

    int i; 
    float t = 0, q;

    for(i = 0;i >-1 ;i++){
        scanf("%f", &q);
        if(q < 0){
            break;
        }
        t += q;
    }
    if(i == 0){
        printf("0.00\n0.00\n");
    } else{
        printf("%.2f\n%.2f\n", t, t/i);
    }
    
    return 0;
}