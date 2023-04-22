#include <stdio.h>

int twoStepCount(int n){
	int steps[n+1];
	steps[1] = 1;
	steps[2] = 2;
	for(int i=3; i<=n; i++){
		steps[i] = steps[i-1] + steps[i-2];
	}
	return steps[n];
}

int threeStepCount(int n){
	int steps[n+1];
	steps[1] = 1;
	steps[2] = 2;
	steps[3] = 4;
	for(int i=4; i<=n; i++){
		steps[i] = steps[i-1] + steps[i-2] + steps[i-3];
	}
	return steps[n];
}

int main(){
	int step;
	scanf("%d", &step);
	printf("two steps : %d\n", twoStepCount(step));
	printf("three steps : %d\n", threeStepCount(step));
	return 0;
}
