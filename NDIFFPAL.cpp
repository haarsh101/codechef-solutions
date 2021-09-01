#include <iostream>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    for(int x=1;x<=t;x++){
        cin>>n;
        string S="abcdefghijklmnopqrstuvwxyz";
        for(int i=0;i<n;i++){
            cout<<S[i%26];
        }
        cout<<endl;
    }
}    