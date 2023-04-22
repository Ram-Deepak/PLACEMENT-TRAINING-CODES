#include<stdio.h>
#include<math.h>

int main(){
	int N;
	scanf("%d", &N);
	int numbers[N+1];
	for(int index=0; index<N+1; index++){
		numbers[index] = 1;
	}
	for(int index=2; index<=sqrt(N); index++){
		for(int nextIndex=index*index; nextIndex<=N; nextIndex+=index){
			numbers[nextIndex]=0;
		}
	}
	for(int index=2; index<=N; index++){
		if(numbers[index]){
			printf("%d ", index);
		}
	}
	printf("\n");
	return 0;
}
