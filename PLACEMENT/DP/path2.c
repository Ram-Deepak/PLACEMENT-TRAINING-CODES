#include<stdio.h>

// bottom right to top left in a grid (with number of ways)

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
	
	pathMatrix[R-1][C-1] = matrix[R-1][C-1];
	for(int col=C-2; col>=0; col--){
		if(matrix[R-1][col]==1){
			pathMatrix[R-1][col] = pathMatrix[R-1][col+1];
		}
	}
	
	for(int row=R-2; row>=0; row--){
		if(matrix[row][C-1] == 1){
			pathMatrix[row][C-1] = pathMatrix[row+1][C-1];
		}
	}
	
	for(int row=R-2; row>=0; row--){
		for(int col=C-2; col>=0; col--){
			if(matrix[row][col]==1){
				if(pathMatrix[row][col+1] || pathMatrix[row+1][col]){
					pathMatrix[row][col] = pathMatrix[row][col+1] + pathMatrix[row+1][col];
				}
			}
		}
	}
	
	printf("\nPath matrix\n");
	for(int row=0; row<R; row++){
		for(int col=0; col<C; col++){
			printf("%d ", pathMatrix[row][col]);
		}
		printf("\n");
	}
	if(pathMatrix[0][0]){
		printf("YES\n");
		printf("No of ways to reach top left : %d\n", pathMatrix[0][0]);
	}
	else{
		printf("NO\n");
	}
	return 0;
}			
