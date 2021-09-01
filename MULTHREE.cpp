#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    long long int k;
    int d0,d1;
    for(int p=1;p<=t;p++){
        cin>>k>>d0>>d1;
        int add=d0+d1;
        int d2=add%10;
        long long int quot=(k-3)/4;
        long long int rem=(k-3)%4;
        int s=(2*add)%10+(4*add)%10+(8*add)%10+(6*add)%10;
        int tot=0;
        if(rem!=0){
            for(int i=1;i<=rem;i++){
                tot+=(int((pow(2,i))*add)%10);
            }
        }    
        int ans=(add+d2+(quot*s)+tot)%3;
        if(ans==0){
            cout<<"YES"<<endl;
        }
        else if(ans!=0){
            cout<<"NO"<<endl;
        }
    }
}        