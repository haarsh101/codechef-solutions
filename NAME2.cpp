#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    string M,W;
    for(int x=1;x<=t;x++){
        cin>>M>>W;
        int m=M.length();
        int w=W.length();
        if(m<w){
            int c=0,q=0;
            for(int i=0;i<m;i++){
                for(int j=q;j<w;j++){
                    if(W[j]==M[i]){
                        c++;
                        q=j+1;
                        break;
                    }
                }
            }
            if(c==m){
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
        }
        else if(m>=w){
            int p=0,r=0;
            for(int i=0;i<w;i++){
                for(int j=r;j<m;j++){
                    if(M[j]==W[i]){
                        p++;
                        r=j+1;
                        break;
                    }
                }
            }
            if(p==w){
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
        }
    }
}        