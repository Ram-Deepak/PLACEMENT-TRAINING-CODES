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
	int N, currVal;
	printf("Enter the number of elements: ");
	scanf("%d", &N);
	printf("Enter the elements:\n");
	for(int ctr=0; ctr<N; ctr++){
		scanf("%d", &currVal);
		push(currVal);
	}
	printf("The values in the stack are ");
	while(!isEmpty()){
		printf("%d ", pop());
	}
	printf("\n");
	return 0;
}
