#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    long long int n;
    for(int x=1;x<=t;x++){
        cin>>n; 
        long long int arr[n];
        for(long long int p=0;p<n;p++){
            cin>>arr[p];
        }
        sort(arr,arr+n);
        long long int count=0;
        for(long long int i=0;i<n;i++){
            if(arr[i]==arr[i+1]){
                count++;
            }
        }
        cout<<count<<endl;
    }
}        