#include<stdio.h>

int main(){
	int N, K;
	scanf("%d", &N);
	int arr[N], sum[N];
	scanf("%d", &arr[0]);
	sum[0] = arr[0];
	for(int index=1; index<N; index++){
		scanf("%d", arr+index);
		sum[index] = sum[index-1] + arr[index];
	}
	scanf("%d", &K);
	for(int index=0; index<=N-K; index++){
		if(arr[index]&1){
			printf("%d ", index==0? sum[K-1] : sum[index+K-1]-sum[index-1]);
		}
	}
	printf("\n");
	return 0;
}
