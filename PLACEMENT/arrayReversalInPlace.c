#include<stdio.h>

int main(){
	int N;
	scanf("%d", &N);
	int array[N];
	for(int i=0; i<N; i++){
		scanf("%d", array+i);
	}
	int temp;
	for(int i=0; i<N/2; i++){
		/*temp = array[i];           // using temporary variable
		array[i] = array[N-i-1];
		array[N-i-1] = temp;*/
		array[i] ^= array[N-1-i];    // using xor operator
		array[N-1-i] ^= array[i];
		array[i] ^= array[N-1-i];
	}
	for(int index=0; index<N; index++){
		printf("%d ", array[index]);
	}
	printf("\n");
	return 0;
}
