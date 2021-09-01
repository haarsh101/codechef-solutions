#include <bits/stdc++.h>
using namespace std;


int gcd(int a,int b){
    while(b!=0){
        int rem=a%b;
        a=b;
        b=rem;
    }
    return a;
}


int main(){
    int t;
    cin>>t;
    for(int x=1;x<=t;x++){
        int n,q;
        cin>>n>>q;
        int arr[n+1];
        int front[n+1];
        int back[n+1];
        front[0]=back[n+1]=0;
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
        for(int k=1;k<=n;k++){
            front[k]=gcd(front[k-1],arr[k]);
        }    
        for(int h=n;h>=1;h--){
            back[h]=gcd(back[h+1],arr[h]);
        } 
        for(int j=1;j<=q;j++){
            int l,r;
            cin>>l>>r;
            cout<<gcd(front[l-1],back[r+1])<<endl;
        }  
    }
}        