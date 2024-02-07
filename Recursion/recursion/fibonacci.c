#include<stdio.h>
int fibo(int n){
    if(n==1 || n==2 ) return 1;
    else if(n>2) return fibo(n-1)+fibo(n-2);
    else printf("Enter the valid no!!");
}

int main(){
    int n;
    scanf("%d",&n);
    int x=fibo(n);
    printf("The sum of fibonacci seires is:%d",x);
}
