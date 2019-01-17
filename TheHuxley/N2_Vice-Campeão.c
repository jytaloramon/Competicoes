#include "stdio.h"
#include "stdlib.h"

int main(){

    int a, b, c, med;
    
    scanf("%d %d %d", &a, &b, &c);

    if( (a > b && b > c ) || (c > b && b > a )){
        med = b; 

    } else  if( (b > a && a > c ) || (c > a && a > b )){
        med = a ;

    } else{
        med = c;
    }
    
    printf("%d\n", med);
    
    return 0;
}