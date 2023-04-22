#include <stdio.h>     //this program has logical errors

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
	int n, currVal;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &currVal);
		if(peek()==currVal){
			pop();
		}
		else{
			push(currVal);
		}
	}
	printf("%d\n", stack[top]);
	return 0;
}
