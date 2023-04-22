#include<stdio.h>

int main(){
	int N;
	scanf("%d", &N);
	int arr[N], points[N];
	scanf("%d %d", &arr[0], &arr[1]);
	points[0] = arr[0];
	if(arr[1]>points[0]){
		points[1]=arr[1];
	}
	else{
		points[1] = arr[0];
	}
	for(int i=2; i<N; i++){
		scanf("%d", arr+i);
		if(arr[i]+points[i-2] > points[i-1]){
			points[i] = arr[i]+points[i-2];
		}
		else{
			points[i] = points[i-1];
		}
	}
	printf("%d\n", points[N-1]);
	return 0;
}
