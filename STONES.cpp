#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    string J;
    string S;
    for(int x=1;x<=t;x++){
        cin>>J;
        cin>>S;
        int c=0;
        for(int i=0;i<S.length();i++){
            for(int j=0;j<J.length();j++){
                if(S[i]==J[j]){
                    c++;
                    break;
                }
            }
        }
        cout<<c<<endl;
    }
}        