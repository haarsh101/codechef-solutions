#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    string S;
    for(int x=1;x<=t;x++){
        cin>>S;
        int sum=0,n;
        for(int i=0;i<S.length();i++){
            if(S[i]>='0'&&S[i]<='9'){
                n=S[i]-48;
                sum+=n;
            }
        }
        cout<<sum<<endl;
    }    
}        