#include "stdio.h"
#include "stdlib.h"

int main(){

    int i, age_max = 0, age_min = 1000, age;

    for (i = 0; i < 4; i++){
        scanf("%d", &age);

        if(age > age_max)
            age_max = age;
        if(age < age_min)
            age_min = age;
    }

    printf("%d\n", age_max - age_min);
    
    return 0;
}