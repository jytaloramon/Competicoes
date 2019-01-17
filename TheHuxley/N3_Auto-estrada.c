#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) {
    int b,size;
    int walls=0;
    char track;
    scanf("%d",&size);
    for(b=0;b<size;b++){
        scanf(" %c" ,&track);
        switch(track){
            case 'P':
            case 'C':
                walls+=2;break;
            case 'A':
                walls+=1;break;
            case 'D':
                break;
        }
    }
  
    printf("%d\n",walls);
    return (EXIT_SUCCESS);
}
