#include<stdio.h>
int fact(int n){
    if(n==1 || n==0) return 1;
    if(n>1) return (n*fact(n-1));
    else printf("Invalid input!!");
}

int main(){
    int n;
    scanf("%d",&n);
   int x= fact(n);
   printf("%d",x);
}