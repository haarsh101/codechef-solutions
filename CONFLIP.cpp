#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int G;
    for(int x=1;x<=t;x++){  
        cin>>G;
        int I,N,Q;
        for(int p=1;p<=G;p++){
            cin>>I>>N>>Q;
            if(N%2==0){
                cout<<N/2<<endl;
                continue;
            }
            else if((N%2)!=0){
                if(I==1&&Q==1){
                    cout<<int(N/2)<<endl;
                    continue;
                }
                else if(I==1&&Q==2){
                    cout<<int(N/2)+1<<endl;
                    continue;
                }
                else if(I==2&&Q==2){
                    cout<<int(N/2)<<endl;
                    continue;
                }
                else if(I==2&&Q==1){
                    cout<<int(N/2)+1<<endl;
                    continue;
                }
            }
        }
    }
}        