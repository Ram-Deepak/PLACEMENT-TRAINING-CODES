#include<stdio.h>

void reverse(int arr[], int left, int right){
	int temp;
	while(left<right){
		temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++, right--;
		
	}
}

int main(){
	int N;
	scanf("%d", &N);
	int array[N];
	for(int i=0; i<N; i++){
		scanf("%d", array+i);
	}
	int K;
	scanf("%d", &K);
	int temp;

	
	reverse(array, 0, N-1);
	reverse(array, 0, K-1);
	reverse(array, K, N-1);
			
	for(int ind=0; ind<N; ind++){
		printf("%d ", array[ind]);
	}
	printf("\n");
	return 0;
}
