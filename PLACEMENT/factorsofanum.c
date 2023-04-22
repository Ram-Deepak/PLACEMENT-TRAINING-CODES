#include<stdio.h>
#include<math.h>

int main(){
	int number;
	scanf("%d", &number);
	int factors[number], storeIndex=0;
	for(int factor=1; factor*factor<=number; factor++){
		if(number%factor==0){
			if(factor!=number/factor){
				printf("%d ", factor);
				factors[storeIndex++] = number/factor;
			}
			else{
				printf("%d ", factor);
			}
		}
	}
	for(int index=0; index<storeIndex; index++){
		printf("%d ", factors[storeIndex]);
	}
	printf("\n");
	return 0;
}
