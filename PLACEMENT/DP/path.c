#include<stdio.h>

// top left to bottom right in a grid

int main(){
	int R, C;
	scanf("%d%d", &R, &C);
	int matrix[R][C];
	for(int row=0; row<R; row++){
		for(int col=0; col<C; col++){
			scanf("%d", &matrix[row][col]);
		}
	}
	int pathMatrix[R][C];
	for(int row=0; row<R; row++){
		for(int col=0; col<C; col++){
			pathMatrix[row][col]=0;
		}
	}
	
	pathMatrix[0][0] = matrix[0][0];
	for(int col=1; col<C; col++){
		if(matrix[0][col]==1){
			pathMatrix[0][col] = pathMatrix[0][col-1];
		}
	}
	
	for(int row=1; row<R; row++){
		if(matrix[row][0] == 1){
			pathMatrix[row][0] = pathMatrix[row-1][0];
		}
	}
	
	for(int row=1; row<R; row++){
		for(int col=1; col<C; col++){
			if(matrix[row][col]==1){
				if(pathMatrix[row][col-1]==1 || pathMatrix[row-1][col]==1){
					pathMatrix[row][col]=1;
				}
			}
		}
	}
	if(pathMatrix[R-1][C-1] == 1){
		printf("Yes\n");
	}
	else{
		printf("NO\n");
	}
	return 0;
}			
