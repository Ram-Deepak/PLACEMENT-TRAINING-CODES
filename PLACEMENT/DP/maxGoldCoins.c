#include<stdio.h>

int main(){
	int R, C;
	scanf("%d %d", &R, &C);
	int matrix[R][C], coinMatrix[R][C];
	for(int row=0; row<R; row++){
		for(int col=0; col<C; col++){
			scanf("%d",&matrix[row][col]);
		}
	}
	
	
	for(int row=0; row<R; row++){
		for(int col =0; col<C; col++){
			coinMatrix[row][col]=0;
		}
	}
	
	coinMatrix[0][0] = matrix[0][0];
	
	for(int col=1; col<C; col++){
		coinMatrix[0][col] = matrix[0][col] + coinMatrix[0][col-1];
	}
	
	for(int row=1; row<R; row++){
		coinMatrix[row][0] = matrix[row][0] + coinMatrix[row-1][0];
	}
	
	for(int row=1; row<R; row++){
		for(int col=1; col<C; col++){
			if(matrix[row][col]+coinMatrix[row-1][col] > matrix[row][col]+coinMatrix[row][col-1]){
				coinMatrix[row][col] = matrix[row][col] + coinMatrix[row-1][col];
			}
			else{
				coinMatrix[row][col] = matrix[row][col] + coinMatrix[row][col-1];
			}
		}
	}
	printf("%d\n", coinMatrix[R-1][C-1]);
	return 0;
}
