#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    
    int n, m, i,j,fim = 0;
    scanf("%d %d",&n,&m);
    int vector[n][m],guard1 = 0, guard2 =0;
    
    if(n >=3 && m >= 3){
        for(i = 0; i< n; i++){
            for(j=0; j< m; j++){
                scanf(" %d",&vector[i][j]);
                getchar();
            }   
        }
    
        for(i=1; i<n-1; i++){
        
            for(j=1; j<m-1; j++){
                if(vector[i][j] == 42){
                    if((vector[i-1][j-1] & vector[i-1][j] & vector[i-1][j+1] &
                        vector[i][j-1] & vector[i][j+1] & vector[i+1][j-1] & 
                        vector[i+1][j] & vector[i+1][j+1]) == 7 ){
                        guard1 = i+1;
                        guard2 = j+1;                       
                        fim = 1;    
                        break;
                    }
                }  
            
            }
            if(fim ==1){
                break;
            }
        }
    
        printf("%d %d\n",guard1 ,guard2);
    }
    
    return (EXIT_SUCCESS);
}
