#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int N,M,K;
    for(int x=1;x<=t;x++){  
        cin>>N>>M>>K;
        int min=abs(N-M);
        if(N<M){
            for(int i=1;i<=K;i++){
                N=N+1;
                int diff=abs(N-M);
                if(diff<min){
                    min=diff;
                }
            }
            cout<<min<<endl;
        }
        else if(M<N){
            for(int i=1;i<=K;i++){
                M=M+1;
                int diff=abs(N-M);
                if(diff<min){
                    min=diff;
                }
            }
            cout<<min<<endl;
        }
    } 
}       