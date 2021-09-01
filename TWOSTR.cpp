#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    string X;
    string Y;
    for(int x=1;x<=t;x++){
        cin>>X;
        cin>>Y;
        int c=0;
        for(int i=0;i<X.length();i++){
            if(X[i]=='?'){
                continue;
            }
            if(Y[i]=='?'){
                continue;
            }
            else if(X[i]!=Y[i]){
                c++;
            }
        }
        if(c>0){
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
    }
}           