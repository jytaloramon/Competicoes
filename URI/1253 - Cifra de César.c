#include "stdio.h"
#include "stdlib.h"

void descriptografa(char *text, int salto){
    int i = 0, q;
    while(text[i] != '\0'){
        q = text[i] - salto;
        if(q < 65){q = 65 - q; q = 91 - q; }
        text[i] = q;
        i++;
    }

}

int main(int argc, char** argv) {
   
    int i, n, salto;
    char pala[51];

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%s %d", &pala, &salto);
        descriptografa(pala, salto);
        printf("%s\n", pala);
    }
    
    return (EXIT_SUCCESS);
}