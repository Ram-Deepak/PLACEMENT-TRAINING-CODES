#include <stdio.h>

int main(){
    int n, sum=0;
    int count=0;
    while(scanf("%d", &n) > 0){
    i
        if(n==1||n==3||n==5||n==7||n==9){
            count++;
            sum+=n;
        }
    }
    if(count!=5){
        printf("-1"); 
    else{
        printf("%d", sum);
    }
    return 0;
}
