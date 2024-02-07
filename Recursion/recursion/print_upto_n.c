// #include<stdio.h>

// void print_upto(n){
//     printf("%d ",n);
//      if(n>1) print_upto(n-1);
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     print_upto(n);
// }

int print_upto(n,m){
    if(n>m) return;
    else{
        printf("%d ",n);
        print_upto(n+1,m);
    }
}

#include<stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    print_upto(n,m);
}