#include<stdio.h>

int main(){
	int matrix[100][100], R=0, C=0, row=0, col=0, val;
	char ch;
	while(scanf("%d%c", &val, &ch)==2){
		matrix[row][col++] = val;
		if(ch!=' '){
			C = col;
			col=0;
			row++;
		}
	}
	R = row;
	printf("%d %d\n", R, C);
	for(row=0; row<R; row++){
		for(col = 0; col<C; col++){
			printf("%d ", matrix[row][col]);
		}
		printf("\n");
	}
	printf("Transpose:\n");
	for(int col=0; col<C; col++){
		for(int row=0; row<R; row++){
			printf("%d ", matrix[row][col]);
		}
		printf("\n");
	}
	return 0;
}
