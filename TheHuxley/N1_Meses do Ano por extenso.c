#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) {

    int a;
    scanf("%d",&a);
    
    switch(a){
        case 1:printf("janeiro\n");break;
        case 2:printf("fevereiro\n");break;
        case 3:printf("marco\n");break;
        case 4:printf("abril\n");break;
        case 5:printf("maio\n");break;
        case 6:printf("junho\n");break;
        case 7:printf("julho\n");break;
        case 8:printf("agosto\n");break;
        case 9:printf("setebro\n");break;
        case 10:printf("outubro\n");break;
        case 11:printf("novembro\n");break;
        case 12:printf("dezembro\n");break;
        default:printf("invalido\n");break;
    }
    
    return (EXIT_SUCCESS);
}

