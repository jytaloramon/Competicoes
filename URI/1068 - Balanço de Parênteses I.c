#include "stdio.h"
#include "stdlib.h"

int main(int argc, char** argv) {
   
    int qt, i;
    char expressao[1010];

    while(scanf("%s", &expressao) != EOF){
        qt = 0;
        i = 0;
        while(expressao[i] != '\0'){
            if(expressao[i] == '(') qt++;
            else if(expressao[i] == ')'){
                qt--;
                if(qt < 0) break;        
            }
            i++;
        }
        if(qt == 0) printf("correct\n");
        else{ printf("incorrect\n");}
    }
    
    return 0;
}