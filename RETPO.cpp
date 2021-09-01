#include <bits/stdc++.h>
using namespace std;

long long int x,y;
int val(long long int a,long long int b){
    long long int ans=0;
    if(a==0){
        b%2==0?ans=2*b:ans=2*b-1;
    }
    else{
        a%2==0?ans=2*a:ans=2*a+1;
    }
    return ans;
}


int main(){
    long long int t,z;
    cin>>t;
    for(long long int p=1;p<=t;p++){
        cin>>x>>y;
        x=abs(x);
        y=abs(y);
        z=min(x,y);
        cout<<(2*z)+val(x-z,y-z)<<endl;
    }
}