#include "stdio.h"
#include "stdlib.h"
#include "ctype.h"

int main(int *args, char *argv){

    char n[50], au;
    int i = 1, aux, q;

    scanf("%s", &n);

    while(n[i] != '\0'){
        n[i] = tolower(n[i]);
        i++;
    }
    n[0] = toupper(n[0]);
    n[i - 1] = toupper(n[i - 1]);    

    q = i -1;
    for(aux = 0; aux < i/2; aux++){
        au = n[aux];
        n[aux] = n[q];
        n[q] = au;
        q--;
    }

    printf("%s\n", n);
    
    return (EXIT_SUCCESS);
}