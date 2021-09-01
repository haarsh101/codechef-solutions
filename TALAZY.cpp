#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    long long int N,B,M;
    for(int x=1;x<=t;x++){
        cin>>N>>B>>M;
        long long int ans=0;
        while(N!=0){
            if(N==1){
               ans+=M;
               break;
            }
            else if(N%2==0){
               ans+=((N/2)*M)+B;
            }   
            else{
               ans+=(((N+1)/2)*M)+B;
            }
            N=N/2;
            M*=2;
        }
        cout<<ans<<endl;
    }
}        