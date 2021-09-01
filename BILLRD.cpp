#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int t;
    cin>>t;
    long long int N,K,x,y;
    for(long long int p=1;p<=t;p++){  
        cin>>N>>K>>x>>y;
        if(x==y){
            x=N;
            y=N;
        }
        else if(x>y){
            if(K%4==1){
                y=y+N-x;
                x=N;
            }
            else if(K%4==2){
                x=y+N-x;
                y=N;
            }
            else if(K%4==3){
                y=x-y;
                x=0;
            }
            else if(K%4==0){
                x=x-y;
                y=0;
            }
        }     
        else if(x<y){
            if(K%4==1){
                x=N+x-y;
                y=N;
            }
            else if(K%4==2){
                y=N+x-y;
                x=N;
            }
           else if(K%4==3){
                x=y-x;
                y=0;
            }
            else if(K%4==0){    
                y=y-x;
                x=0;
            }
        }
        cout<<x<<" "<<y<<endl;
    }
}        