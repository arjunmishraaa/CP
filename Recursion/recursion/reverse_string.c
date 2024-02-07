#include<stdio.h>
char reverse_string(int a, int b,char* str){
    if(a<b){
       char temp= str[a];
        str[a]=str[b];
        str[b]=temp;
        reverse_string(a+1,b-1,str);
    }
    // else printf("Invalid input!!\nThe Range should be from low to high!!");
}


int main(){
    int n; 
    printf("Enter the size: ");
    scanf("%d",&n);
    char str[n];
    printf("Eneter string: ");
    
    int a,b;
    printf("Enter the limit to reverse:\n");
    scanf("%d %d",&a,&b);
    reverse_string(a,b,str[n]);
}