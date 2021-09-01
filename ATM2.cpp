#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int t;
    cin>>t;
    long long int N,K;
    for(long long int p=1;p<=t;p++){  
        cin>>N>>K;
        long long int arr[N];
        for(long long int x=0;x<N;x++){
            cin>>arr[x];
        }
        for(long long int i=0;i<N;i++){
            if(arr[i]<=K){
                K=K-arr[i];
                arr[i]=1;
            }
            else if(arr[i]>K){
                arr[i]=0;
            }
        }
        for(long long int j=0;j<N;j++){
            cout<<arr[j];
        }
        cout<<endl;
    }
}        