#include <stdio.h>

unsigned long long int twoStepCount(int n){
	unsigned long long int steps[n+1];
	steps[1] = 1;
	steps[2] = 2;
	for(int step=3; step<=n; step++){
		steps[step] = steps[step-1] + steps[step-2];
	}
	return steps[n];
}

unsigned long long int threeStepCount(int n){
	unsigned long long int steps[n+1];
	steps[1] = 1;
	steps[2] = 2;
	steps[3] = 4;
	for(int step=4; step<=n; step++){
		steps[step] = steps[step-1] + steps[step-2] + steps[step-3];
	}
	return steps[n];
}

int main(){
	int step;
	scanf("%d", &step);
	printf("two steps : %llu\n", twoStepCount(step));
	printf("three steps : %llu\n", threeStepCount(step));
	return 0;
}
