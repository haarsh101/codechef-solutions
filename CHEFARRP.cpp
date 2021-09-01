#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int n;
    for(int x=1;x<=t;x++){
        cin>>n;
        long long int arr[n];
        for(int p=0;p<n;p++){
            cin>>arr[p];
        }
        int c=0;
        for(int i=0;i<n;i++){
            long long int sum=0,prod=1;
            for(int j=i;j<n;j++){
                sum+=arr[j];
                prod*=arr[j];
                if(sum==prod){
                    c++;
                }
            }
        }
        cout<<c<<endl;
    }
}    