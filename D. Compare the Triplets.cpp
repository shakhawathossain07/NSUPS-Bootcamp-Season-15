#include<iostream>
using namespace std;
int main(){
    int a[3],b[3],p1=0,p2=0;
    for(int i=0;i<3;i++){
        cin>>a[i];}
        for(int i=0;i<3;i++){
        cin>>b[i];}
        for(int i=0;i<3;i++){
            if((1<=a[i]&&a[i]<=100)&&(1<=b[i]&&b[i]<=100)){
        if(a[i]>b[i]){
            p1=p1+1;
        }
        else if(a[i]<b[i]){
            p2=p2+1;
        }
        }else{return 0;}
}
 cout<<p1<<" "<<p2;
 return 0;
}
