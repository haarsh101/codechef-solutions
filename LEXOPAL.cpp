#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    string S;
    for(int x=1;x<=t;x++){
        cin>>S;
        bool ispalimdrone=true;
        n=S.length();
        for(int i=0;i<n;i++){
            if((S[i]!=S[(n-1)-i])&&(S[i]!='.')&&(S[(n-1)-i]!='.')){
                cout<<"-1"<<endl;
                ispalimdrone=false;
                break;
            }
            if(S[i]==S[(n-1)-i]){
                ispalimdrone=true;
            }
            if(S[i]=='.'){
                S[i]=S[(n-1)-i];
                ispalimdrone=true;
            }
            if(S[(n-1)-i]=='.'){
                S[(n-1)-i]=S[i];
                ispalimdrone=true;
            }
            if(S[i]=='.' && S[(n-1)-i]=='.'){
                S[i]=S[(n-1)-i]='a';
                ispalimdrone=true;
            }
        }
        if(ispalimdrone==true)
        {
            cout<<S<<endl;
        }
    }
}            
            