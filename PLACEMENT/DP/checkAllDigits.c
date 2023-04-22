#include<stdio.h>


int main(){
	int n, digit, result=0;
	scanf("%d", &n);
	for(int ctr=1; ctr<=n; ctr++){
		scanf("%d", &digit);
		result = result | (1<<digit);
	}
	if(result == (1<<10)-1){
		printf("Yes\n");
	}
	else{
		printf("No\n");
	}
	return 0;	
}			
