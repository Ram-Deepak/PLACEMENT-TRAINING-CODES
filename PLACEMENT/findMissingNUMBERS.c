#include<stdio.h>

int main(){
	int N, K;
	scanf("%d %d", &N, &K);
	int arr[N+1];
	for(int i=0; i<N+1; i++){
		arr[i]=0;
	}
	int currVal;
	for(int i=0; i<N-K; i++){
		scanf("%d", &currVal);
		arr[currVal] = currVal;
	}
	for(int i=1; i<N+1; i++){
		if(arr[i]==0){
			printf("%d ", i);
		}
	}
	printf("\n");
	return 0;
}
