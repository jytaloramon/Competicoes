#include "stdio.h"
#include "stdlib.h"

void print(int *arr, int length, char *txt){
    int i;
    for (i = 0; i < length; i++)
        printf("%s[%d] = %d\n", txt, i, arr[i]);
}

int main(int argc, char const *argv[]){

    int i, v, countP = 0, countNotP = 0, pairArr[5], notPairArr[5];

    for (i = 0; i < 15; i++){
        scanf("%d", &v);
        
        if (v % 2 == 0){
            pairArr[countP++] = v;

            if (countP == 5){
                print(pairArr, countP, "par");
                countP = 0;
            }
        } else {
            notPairArr[countNotP++] = v;

            if (countNotP == 5){
                print(notPairArr, countNotP,"impar");
                countNotP = 0;
            }
        }
    }

    print(notPairArr, countNotP, "impar");
    print(pairArr, countP, "par");
    
    return 0;
}
