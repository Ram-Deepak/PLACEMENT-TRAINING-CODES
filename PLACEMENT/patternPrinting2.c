#include<stdio.h>

int main(){
	 int n;
	 scanf("%d", &n);
	 for(int row=1; row<=n; row++){
	 	int value=row, increment;
	 	for(int col=1; col<=n; col++){
	 		printf("%d ", value);
	 		increment = (col&1) ? 2*(n-row)+1 : 2*(row-1)+1;
	 		value+=increment;
	 	}
	 	printf("\n");
	 }
	 return 0;			
}
