#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void convert(char *pala){
    int i = 0;
    while(pala[i] != '\0'){
        pala[i] = toupper(pala[i]);
        i++;
    }
}

void main() {
    
    char palavra[40];
    int quant;
    gets(palavra);
    scanf("%d", &quant);
    convert(palavra);

    if(strcmp(palavra, "MURAL") == 0) {
        printf("%d.00\n",quant*200);
    }
    else if(strcmp(palavra, "O CORETO") == 0) {
        printf("%d.00\n",quant*235);

    }
    else if(strcmp(palavra, "MEU LAR") == 0) {
        printf("%.2f\n",(quant*180) - (quant*180*0.1));

    }
    else {
        printf("%.2f\n",(quant*230) - (quant*230*0.1));
        
    }
    
}