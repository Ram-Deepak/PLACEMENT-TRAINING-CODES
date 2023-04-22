#include<stdio.h>

int main(){
	int R, C;
	scanf("%d %d", &R, &C);
	int matrix[R][C];
	for(int row=0; row<R; row++){
		for(int col=0; col<C; col++){
			scanf("%d", &matrix[row][col]);
		}
	}
	
	unsigned long long int pathMatrix[R][C];
	for(int row=0; row<R; row++){
		for(int col=0; col<C; col++){
			pathMatrix[row][col] = 0;
		}
	}
	
	pathMatrix[0][0] = 1;
	for(int cols=1; cols<C; cols++){
		if(matrix[0][cols]%2!=0){
			pathMatrix[0][cols] = pathMatrix[0][cols-1];
		}
	}
	
	for(int rows=1; rows<R; rows++){
		if(matrix[rows][0]%2!=0){
			pathMatrix[rows][0] = pathMatrix[rows-1][0];
		}
	}
	
	for(int row=1; row<R; row++){
		for(int col=1; col<C; col++){
			if(matrix[row][col]%2!=0){
				pathMatrix[row][col] = pathMatrix[row-1][col] + pathMatrix[row][col-1];
			}
		}
	}
	
	printf("%llu\n", pathMatrix[R-1][C-1]);
	return 0;
}
