#include<iostream>
using namespace std;
int main(){
    int n,s=0;
    cin>>n;
    int a[n];
     if(0<n && n<=1000){
    for(int i=0;i<n;i++)
    cin>>a[i];
     }else{
         return 0;
     }
    for(int i=0;i<n;i++){
            if(0<a[i] && a[i]<=1000){
               s=s+a[i];
               }else{
        return 0;
        }
    }
    cout<<s;
    return 0;
}
