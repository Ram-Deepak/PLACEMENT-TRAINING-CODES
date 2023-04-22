#include <stdio.h>

int stack[100], top=-1;

void push(int val){
	stack[++top] = val;
}

int pop(){
	return stack[top--];
}

int isEmpty(){
	return top==-1;
}

int peek(){
	if(!isEmpty()){
		return stack[top];
	}
}
	
int main(){
	int N;
	scanf("%d", &N);
	int arr[N];
	for(int index=0; index<N; index++){
		scanf("%d", arr+index);
	}
	for(int i=N-1; i>=0; i--){
		int curVal = arr[i];
		if(!isEmpty()){
			if(peek() > arr[i]){
				arr[i] = peek();
			}
			else{
				while(!isEmpty() && peek()<=arr[i]){
					pop();
				}
				if(!isEmpty()){
					arr[i] = peek();
				}
			}
		}
		push(curVal);
	}
	for(int i=0; i<N; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}
