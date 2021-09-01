#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int t;
    cin>>t;
    long long int Xa,Ya,Xb,Yb,Xc,Yc;
    for(long long int p=1;p<=t;p++){  
        cin>>Xa>>Ya;
        cin>>Xb>>Yb;
        cin>>Xc>>Yc;
        int count=0;
        if((Xa!=Xb)&&(Ya!=Yb)){
            count++;
        }    
        if((Xc!=Xb)&&(Yb!=Yc)){
            count++;
        }    
        if(((Xa-Xb)*(Xb-Xc))<0){
            count++;
        }    
        if(((Ya-Yb)*(Yb-Yc))<0){
            count++;
        }    
        if(count>1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}            