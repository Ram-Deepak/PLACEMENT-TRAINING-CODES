#include<stdio.h>

#define ULL unsigned long long int  // macro 

ULL gcd(ULL n1, ULL n2){   // euclidian algorithm

	//return n1==0 ? n2 : gcd(n2%n1, n1);
	if(n1==0){
		return n2;
	}
	return gcd(n2%n1, n1);
}

int main(){ 
	ULL n1, n2;                    // ULL -> acts as a datatype
	scanf("%llu %llu", &n1, &n2);
	printf("%llu\n", gcd(n1, n2));
}
