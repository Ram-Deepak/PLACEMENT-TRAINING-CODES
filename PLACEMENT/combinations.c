#include<stdio.h>

int main(){
	char str[100];
	int len;
	scanf("%s%n", str, &len);
	for(int ctr=1; ctr<=(1<<len)-1; ctr++){
		for(int shift=0; shift<len; shift++){
			if(ctr&(1<<shift)){
				printf("%c", str[shift]);
			}
		}
		printf("\n");
	}
	return 0;
}
