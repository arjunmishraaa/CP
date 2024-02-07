#include<stdio.h>
#include<string.h>
void rev(char str[], int n){
     if(n<0) return;
     printf("%c",str[n]);
     return rev(str,n-1);

    
}
int main()
{
    int n;
    char str[200];
    scanf("%s",&str);
    n=strlen(str);
    rev(str,n);
}