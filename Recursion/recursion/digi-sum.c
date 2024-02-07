#include<stdio.h>

int digi_sum(n){
    if(n<=9) return n;
    else{
        return (n%10)+digi_sum(n/10);
    }
}

int main(){
    int n;
    scanf("%d",&n);
    if(n<0) n=n*(-1);
    printf("%d",digi_sum(n));
}