#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    int a[n];
    int b[n];
    int c[n];
    for(int i=0; i<n;i++){
        cin>>a[i];
        cin>>b[i];
        cin>>c[i];
    }
    
    
    
    int sumA=0,sumB=0,sumC=0;
   for(int i=0; i<n;i++){
        sumA+=a[i];
        sumB+=b[i];
        sumC+=c[i];
        
        }
        if((sumA||sumB||sumC)!=0) cout<<"NO";
        else cout<<"YES";
   
}
