#include<stdio.h>
#include<string.h>

int main(){
	int n;
	scanf("%d", &n);
	char str[100];
	scanf("%s", str+0);
	int len = strlen(str);
	scanf("%s", str+len);
	printf("%s\n", str);
	printf("%s\n", str+3);
	return 0;
}
