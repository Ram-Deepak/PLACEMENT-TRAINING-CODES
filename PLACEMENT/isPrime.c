#include<stdio.h>
#include<math.h>

int main(){
	int number, flag=1;
	scanf("%d", &number);
	for(int n=2; n*n<=number; n++){
		if(number%n==0){
			flag=0;
		}
	}
	if(flag){
		printf("Prime\n");
	}
	else{
		printf("Not Prime\n");
	}
	return 0;
}
