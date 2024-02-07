#include<stdio.h>
int fact(int n){
    if(n==1 || n==0) return 1;
    if(n>1) return (n*fact(n-1));
    else printf("Invalid input!!");
}

int main(){
    int n,r,m;
    scanf("%d %d %d",&n,&r,&m);
   int x= fact(n)/(fact(n-r)*fact(r));
   printf("%d",x%m);
}