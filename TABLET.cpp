#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    long long int N,B;
    for(int x=1;x<=t;x++){
        cin>>N>>B;
        long long int W,H,P;
        long long int max=0;
        for(int i=1;i<=N;i++){
            cin>>W>>H>>P;
            if((P<=B)&&(W*H>max)){
                max=W*H;
            }
        }
        if(max==0){
            cout<<"no tablet"<<endl;
            continue;
        }
        cout<<max<<endl;
    }    
}