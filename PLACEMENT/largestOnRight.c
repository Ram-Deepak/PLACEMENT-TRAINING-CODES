#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int arr[n];
	for(int i=0; i<n; i++){
		scanf("%d", arr+i);
	}
	for(int index=0; index<n; index++){
		int nextLargestValue = arr[index];
		for(int nextIndex = index+1; nextIndex<n; nextIndex++){
			if(arr[nextIndex]>arr[index]){
				nextLargestValue = arr[nextIndex];
				break;
			}
		}
		printf("%d ", nextLargestValue);
	}
	printf("\n");
	return 0;	
}		
