#include<bits/stdc++.h>
using namespace std;

int prime(int m,int n){
    for(int i=m;i<=n;i++){
        int c=0;
        for(int j=2;j<=sqrt(i);j++){
            if(i%j==0){
                c++;
            }
        }
        if(c==0&&i!=1){
            cout<<i<<endl;
        }
    }
}

int main(){
    int t;
    cin>>t;
    int m,n;
    for(int x=1;x<=t;x++){
        cin>>m>>n;
        cout<<endl;
        cout<<endl;
        if(m<n){
            int pr=prime(m,n);
        }
    }    
}