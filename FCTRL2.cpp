#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    int ans=1;
    for(int i=2;i<=n;i++){
        ans=ans*i;
    }
    return ans;
}

int main(){
    int t;
    cin>>t;
    int n;
    for(int i=1;i<=t;i++){
        cin>>n;
        int f=fact(n);
        cout<<f<<endl;
    }
}