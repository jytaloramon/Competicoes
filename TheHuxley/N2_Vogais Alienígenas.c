#include "stdio.h"
#include "stdlib.h"
#include "string.h"

#define MAX 62

int vowels[MAX];

void setVowels(char *str);

int main(int argc, char const *argv[]){
  
    int i, j, t, q, caseTest;
    char vowel[MAX], text[500];

    scanf("%d", &caseTest);
    getchar();

    for (i = 0; i < caseTest; i++){
        scanf("%s", vowel);
        scanf(" %[^\n]s", text);
    
        setVowels(vowel);
        
        j = 0;
        t = 0;
        while (text[j] != '\0'){
            if (text[j] != ' '){
                if (text[j] > 96)
                    q = text[j] - 97;
                else if (text[j] > 64)
                    q = text[j] - 39;
                else 
                    q = text[j] + 4;
            
                t += vowels[q];
            }
            
            j++;
        }
        
        printf("%d\n", t);
    }
    
    return 0;
}

void setVowels(char *str){
    memset(vowels, 0, sizeof(int) * MAX);
    
    int i = 0, q;

    while (str[i] != '\0'){
        if (str[i] > 96)
            q = str[i] - 97;
        else if (str[i] > 64)
            q = str[i] - 39;
        else 
            q = str[i] + 4;

        vowels[q] = 1;
        i++;
    }
}