#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    long long int n;
    for(int x=1;x<=t;x++){  
        cin>>n;
        int arr[n];
        long long int s=0;
        for(int p=0;p<n;p++){
            cin>>arr[p];
            s+=arr[p];
        }
        int min=0;
        for(int i=0;i<n;i++){
            if(arr[i]<arr[min]){
                min=i;
            }
        }
        long long int ans=s-n*arr[min];
        cout<<ans<<endl;
    }
}        