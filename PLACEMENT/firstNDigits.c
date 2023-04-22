#include<stdio.h>

int main(){
	int n, k, num;
	scanf("%d %d", &n, &k);
	num = n;
	int count=0;
	while(num!=0){
		num/=10;
		count++;
	}
	int ctr=count;
	int limit = count-k;
	while(ctr>=limit){
		n/=10;
		printf("%d\n", n);
		ctr--;
	}
	printf("%d\n", n);
}
