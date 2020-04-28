#include "stdio.h"
#include "stdlib.h"

char sub[105], word[100005];

int very();

int main(int argc, char const *argv[]){
    
    int i, j, t, qtCase, qtSub;

    scanf("%d", &qtCase);

    for (i = 0; i < qtCase; i++){
        scanf("%s %d", word, &qtSub);     

        for (j = 0; j < qtSub; j++){
            scanf("%s", sub);

            printf("%s\n", very() ? "Yes" : "No");
        }
    }

    return 0;
}

int very(){
    int i = 0, t = 0;

    while (word[t] != '\0' && sub[i] != '\0'){
        
        if (word[t] == sub[i])
            i++;
        t++;
    }

    return sub[i] == '\0';
}
