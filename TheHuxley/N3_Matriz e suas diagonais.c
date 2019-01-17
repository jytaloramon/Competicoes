#include "stdio.h"
#include "stdlib.h"

int main(){

    int x, i, j, cont = 1, t = 0, b = 1;

    scanf("%d", &x);

    printf("Matriz:\n");    
    for(i = 0; i < x; i++){
        for(j = 0; j < x; j++){
            printf("  %d", cont++);
        }
        printf("\n");
    }

    printf("\nDiagonal Principal:\n");  
    cont = 1;  
    for(i = 0; i < x; i++){
        for(j = 0; j < x; j++){
            if(i == j) {printf("  %d", cont);break;}
            else{printf("   ");}
            cont++;
        }
        cont = (i+1)*x+1;
        printf("\n");
    }
    
    printf("\nDiagonal Secundaria:\n");
    cont = 1;
    t = 0;   
    for(i = 0; i < x; i++){
        for(j = 0; j < x; j++){
            if(cont == (x*(i+1)) - t) {printf("  %d", cont); break;}
            else{printf("   ");}
            cont++;
        }
        cont = (i+1)*x+1;
        printf("\n");
        t++;
        b++;
    }

    return 0;
}        