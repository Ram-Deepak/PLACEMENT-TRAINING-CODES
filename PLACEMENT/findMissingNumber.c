#include<stdio.h>

int main(){
	int N, currVal;
	scanf("%d", &N);
	int sum=0;
	for(int i=0; i<N-1; i++){
		scanf("%d", &currVal);
		sum+=currVal;
	}
	int total=0;
	for(int i=1; i<=N;i++){
		total+=i;
	}
	printf("%d\n", total-sum);
	return 0;
}	
