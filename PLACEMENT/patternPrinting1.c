#include<stdio.h>

/* 3
   1 2 3  --> Pattern Format
   6 5 4
   7 8 9
*/

int main(){
	int num, j, k;
	scanf("%d", &num);
	for(int i=1; i<=num*num; i++){
		printf("%d ", i);
		if(i%num==0 && i!=num*num){
			printf("\n");
			k = i+num;
			for(j=k; j>i; j--){
				printf("%d ", j);
		
			}
			i=k;
			printf("\n");
		}
	}
	printf("\n");
	return 0;
}

