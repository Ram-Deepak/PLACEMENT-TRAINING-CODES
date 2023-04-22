#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int rooms[n]; //works only for 31 bits ----- for more than 31 use "long long int" datatype 
	for(int roomNo=0; roomNo<n; roomNo++){
		scanf("%d", rooms+roomNo);
	}
	int guests, waysToFill=0;
	scanf("%d", &guests);
	for(int ctr=1; ctr<=(1<<n)-1; ctr++){
		int accomodated=0;
		for(int shift=0; shift<n; shift++){
			if(ctr&(1<<shift)){
				accomodated+=rooms[shift];
			}
		}
		if(accomodated==guests){
			waysToFill++;
		}
	}
	printf("%d\n", waysToFill);
}
