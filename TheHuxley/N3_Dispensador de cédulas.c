#include "stdio.h"
#include "stdlib.h"
#include "string.h"

char tab[3][4]; 
int posi_check[8][3][2] = {
    {{0, 0}, {1, 1}, {2, 2}},
    {{0, 2}, {1, 1}, {2, 0}},
    {{0, 0}, {0, 1}, {0, 2}},
    {{1, 0}, {1, 1}, {1, 2}},
    {{2, 0}, {2, 1}, {2, 2}},
    {{0, 0}, {1, 0}, {2, 0}},
    {{0, 1}, {1, 1}, {2, 1}},
    {{0, 2}, {1, 2}, {2, 2}}
};

int is_win(){
    int i, res[] = {0, 0};
    
    for (i = 0; i < 8; i++){
        if(tab[posi_check[i][0][0]][posi_check[i][0][1]] == tab[posi_check[i][1][0]][posi_check[i][1][1]] &&
            tab[posi_check[i][0][0]][posi_check[i][0][1]] == tab[posi_check[i][2][0]][posi_check[i][2][1]] &&
            tab[posi_check[i][0][0]][posi_check[i][0][1]] != '_'){

            res[tab[posi_check[i][0][0]][posi_check[i][0][1]] == 'O'] = 1;
        }  
    }
    
    if (res[0] && res[1]) return 2;
    if (!res[0] && !res[1]) return -1;

    return !res[0];
}

int main(int argc, char const *argv[]){

    int i, j, t, case_t, count_x, count_o;

    scanf("%d", &case_t);
    getchar();

    for(t = 0; t < case_t; t++){
        count_x = count_o = 0;

        for(i = 0; i < 3; i++){
            for(j = 0; j < 3; j++){
                scanf("%c", &tab[i][j]);
                if(tab[i][j] == 'X') count_x++;
                else if (tab[i][j] == 'O') count_o++;
                getchar();
            }
        }

        i = is_win();

        if (i == 2 || count_o > count_x)
            printf("ILEGAL\n");
        else if (i == -1){
            printf("%s\n", count_x - count_o < 2 ? "EM_ANDAMENTO" : "ILEGAL");
        } else{
            if(i == 0)
                printf("%s\n", count_x - count_o == 1 ? "X_VENCEU" : "ILEGAL");
            else
                printf("%s\n", count_x - count_o == 0 ? "O_VENCEU" : "ILEGAL");
        }
    }
    
    return 0;
}
