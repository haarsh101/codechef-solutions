#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    string S;
    for(int x=1;x<=t;x++){
        cin>>S;
        int a=0,b=0;
        for(int i=0;i<S.length();i++){
            if(S[i]=='a'){
                a++;
            }
            else if(S[i]=='b'){
                b++;
            }
        }
        if(a<=b){
            cout<<a<<endl;
        }
        else  if(b<a){
            cout<<b<<endl;
        }
    }
}    