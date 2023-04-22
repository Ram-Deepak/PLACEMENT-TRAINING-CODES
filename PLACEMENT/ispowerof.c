#include<stdio.h>

int main(){
	int x, y;
	scanf("%d %d", &x, &y);
	while(y%x==0){
		y=y/x;
	}
	printf(y==1?"YES\n":"NO\n");
	return 0;
}	
