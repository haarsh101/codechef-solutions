#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long int arr[n];
    for(long long int x=0;x<n;x++){
        cin>>arr[x];
    }
    long long int hash[n+1]={0};
    for(long long int i=0;i<n;i++){
        hash[arr[i]]++;
    }   
    for(long long int j=0;j<n+1;j++){
        if(hash[j]==0){
            cout<<j<<" ";
        }
    }
    cout<<endl;
}    