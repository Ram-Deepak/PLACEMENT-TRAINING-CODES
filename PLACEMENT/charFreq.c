#include<stdio.h>

int main(){
	char str[100];
	scanf("%s", str);
	int freq[26] = {0};
	for(int c=0; str[c]!='\0'; c++){
		freq[str[c]-'a']++;
	}
	for(int f=0; f<26; f++){
		if(freq[f]){
			printf("%c %d\n", f+97, freq[f]);
		}
	}
	return 0;
}
