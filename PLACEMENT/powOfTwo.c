#include<stdio.h>

int main(){
	int a;
	scanf("%d", &a);
	if(!(a&(a-1))){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
}
