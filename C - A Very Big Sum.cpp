#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long int a[n],s=0;
     if(1<=n && n<=10){
    for(int i=0;i<n;i++)
    cin>>a[i];
     }else{
         return 0;
     }
    for(int i=0;i<n;i++){
            if(0<=a[i] && a[i]<=pow(10,10)){
               s=s+a[i];
               }else{
        return 0;
        }
    }
    cout<<s;
    return 0;
}
