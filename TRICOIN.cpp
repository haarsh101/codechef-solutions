#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int n;
    for(int x=1;x<=t;x++){
        cin>>n;
        int j=n;
        for(int i=1;i<=n;i++){
            j=(j-i);
            if(j<(i+1)){
                cout<<i<<endl;
                break;
            }
        }
    }

}