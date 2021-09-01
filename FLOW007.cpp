#include<bits/stdc++.h>
using namespace std;

int reverse(int n){
    int ans=0;
    while(n>0){
        int r=n%10;
        ans=(ans*10)+r;
        n=n/10;
    }
    return ans;
}

int main(){
    int t;
    cin>>t;
    int n;
    for(int i=1;i<=t;i++){
        cin>>n;
        int r=reverse(n);
        cout<<r<<endl;
    }
}