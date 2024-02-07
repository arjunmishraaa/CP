#include<stdio.h>

int pow(a,b,m){
    if(b>0){
        return (a*pow(a,b-1,m))%m;
    }else return 1;
}

int main(){
    int a,b,m;
    scanf("%d %d %d",&a,&b,&m);
    printf("%d",pow(a,b,m));
}