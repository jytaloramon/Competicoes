#include "stdio.h"
#include "stdlib.h"

void convert(int n){
    if (n < 16){
        printf("%c", n < 10 ? n + 48 : n % 10 + 65);
        return;
    }

    convert(n / 16);

    int i = n % 16;
    
    printf("%c", i < 10 ? i + 48 : i % 10 + 65);

}

int main(int argc, char const *argv[]){
   
    int v;

    scanf("%d", &v);
    convert(v);
    printf("\n");

    return 0;
}
