#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int l1[30], l2[30];

int countChar(char *s1, char *s2);

int main(int argc, char const *argv[]){
  
    int i, caseTest, r;
    char str1[25], str2[25];
    
    scanf("%d", &caseTest);

    for (i = 0; i < caseTest; i++){
        scanf("%s %s", str1, str2);
        printf("%s\n", countChar(str1, str2) ? "Compartilham Substring" : "Nao Compartilham Substring");
    }

    return 0;
}

int countChar(char *s1, char *s2){
    memset(l1, 0, sizeof(int) * 26);
    memset(l2, 0, sizeof(int) * 26);

    int i = 0;

    while (s1[i] != '\0')
        l1[s1[i++] - 97] = 1; 
    
    i = 0;
    while (s2[i] != '\0')
        l2[s2[i++] - 97] = 1; 

    for (i = 0; i < 26; i++)
        if(l1[i] && l2[i])
            return 1;

    return 0;
}