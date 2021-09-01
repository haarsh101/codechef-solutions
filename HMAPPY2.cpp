#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int x=1;x<=t;x++){
        long long int n,a,b,k;
        cin>>n>>a>>b>>k;
        long long int learn1=a;
        long long int learn2=b;
        long long int prod=a*b;
        while(b!=0){
            long long int rem=a%b;
            a=b;
            b=rem;
        } 
        long long int gcd=a;
        if((int(n/learn1)+int(n/learn2)-(2*int(n/(prod/gcd))))>=k){
            cout<<"Win"<<endl;
        }
        else cout<<"Lose"<<endl;
    }
}        