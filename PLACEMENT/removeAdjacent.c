#include<stdio.h>

int stack[100], top=-1;

void push(int val){
	stack[++top] = val;
}

int pop(){
	return stack[top--];
}

int peek(){
	return stack[top];
}

int isEmpty(){
	return top==-1;
}

int main(){
	int N, inputValue;
	scanf("%d", &N);
	//int arr[N];
	for(int index = 0; index < N; index++){
		scanf("%d", &inputValue);
		if(peek()== inputValue){
			pop();
		}
		else{
			push(inputValue);
		}
		
	}
	/*for(int ctr=0; ctr<N; ctr++){
		if(peek()!=arr[ctr]){
			push(arr[ctr]);
		}
		else{
			pop();
		}
	}*/
	if(isEmpty()){
		printf("-1");
		return 0;
	}
	int arr1[top+1];
	int counter=0;
	while(!isEmpty()){
		arr1[counter++] = pop();
	}
	for(int i=counter-1; i>=0; i--){
		printf("%d ", arr1[i]);
	}
	printf("\n");
	return 0;
}
