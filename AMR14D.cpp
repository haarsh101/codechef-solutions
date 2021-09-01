#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int n;
    for(int x=1;x<=t;x++){
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int m=0;
        sort(arr,arr+n);
        for(int j=0;j<n;j++){
            if(arr[j+1]==arr[j]){
                cout<<"NO"<<endl;
                m=1;
                break;
            }
        }
        if(m==0){
            cout<<"YES"<<endl;
        }
    }
}