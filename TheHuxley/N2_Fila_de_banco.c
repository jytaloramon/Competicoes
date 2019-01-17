 #include "stdio.h"

int vetor[21000];
int n, m, k, i, posi;
	
void execulta(int q, int t, int r, int p){
		
	posi = q;
	for(i = 0; i < n;i++){
		scanf("%d", &vetor[posi]);
		if(i < m-p){
			posi +=2; 
			continue;
		}
		posi++;
		
	}
		
	i = 0;
	posi = t;
	while(i < m){
		scanf("%d", &vetor[posi]);
		if(i < n-r){
			posi +=2;
			i++;
			continue;
		}
		i++;
		posi++;
			
	}					
}

int main(){

	scanf("%d%d%d", &n, &m, &k);
	
	if(k == 1){
		execulta(1, 0, 0, 1);
	}
	else{
		execulta(0, 1, 1, 0);
	}
	
	for(i = 0; i < m+n; i++){
			printf("%d\n", vetor[i]);
	}
	
	return 0;
}
