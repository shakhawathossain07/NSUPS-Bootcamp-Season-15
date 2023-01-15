#include<iostream>
using namespace std;
int main(){
    int n,r,c,d1=0,d2=0;
    cin>>n;
    r=c=n;
    int a[r][c];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
                cin>>a[i][j];

        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
                if((-100<=a[i][j])&& (a[i][j]<=100)){
                if(i==j){
                d1=d1+a[i][j];}
                if((i+j)==(n-1)){
                    d2=d2+a[i][j];
                }
        }

        }
    }

cout<<abs(d1-d2);
}
