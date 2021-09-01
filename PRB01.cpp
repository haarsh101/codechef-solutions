#include<bits/stdc++.h>
using namespace std;

bool prime(int n){
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0)
                return false;
        }
        return true;
    }

int main(){
    int t;
    cin>>t;
    int n;
    for(int i=1;i<=t;i++){
        cin>>n;
        bool r=prime(n);
        if(r){
            cout<<"yes"<<endl;
        }
        else {
            cout<<"no"<<endl;
        }
    }
}