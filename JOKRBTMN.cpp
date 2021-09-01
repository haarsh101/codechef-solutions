#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int o=1;o<=t;o++){
        int N,M,L;
        cin>>N>>M>>L;
        int hash[N+1];
        for(int x=1;x<=M;x++){
            int K;
            cin>>K;
            for(int y=1;y<=K;y++){
                int p;
                cin>>p;
                hash[p]=x;
            }
        }
        int count=0,prevStrip=0;
        for(int i=1;i<=L;i++){
            int s;
            cin>>s;
            if(hash[s]!=prevStrip){
               count++;
            }   
            prevStrip=hash[s];   
        }
        cout<<count<<endl;
    }
}        