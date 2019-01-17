#include <cstdio>

#define min(a,b) ((a) < (b) ? (a) : (b))

int main(){
	int A,B,C;
	scanf("%d %d %d", &A, &B, &C);
	printf("%d\n", min(A/2, min(B/3, C/5)));
	return 0;
}  
