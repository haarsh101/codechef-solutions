#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int n,k;
    for(int x=1;x<=t;x++){
        cin>>n>>k;
        int arr[n];
        int c=0;
        for(int p=0;p<n;p++){
            cin>>arr[p];
            c+=(arr[p]%2==0)?1:0;
        }
        if(k==0){
            if(c<n){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else if(c>=k){
            cout<<"YES"<<endl;
        } 
        else{
            cout<<"NO"<<endl;
        }   
    }
}        