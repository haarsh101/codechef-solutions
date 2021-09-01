#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int x=1;x<=t;x++){
        long long int n,k;
        cin>>n>>k;
        long long int arr[n];
        for(int p=0;p<n;p++){
            cin>>arr[p];
        }
        sort(arr,arr+n);
        for(int i=0;i<k;i++){
            if(arr[i]>=0){
                break;
            }
            arr[i]*=-1;
        }
        long long int sum=0;
        for(int j=0;j<n;j++){
            if(arr[j]>0){
                sum+=arr[j];
            }
        }
        cout<<sum<<endl;
    }
}    