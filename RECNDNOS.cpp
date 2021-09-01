#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int n;
    for(int x=1;x<=t;x++){
        cin>>n;
        int arr[n];
        int hash[10000]={0};
        for(int p=0;p<n;p++){
            cin>>arr[p];
        }
        for(int i=0;i<n;i++){
            int count=0;
            int m=arr[i];
            for(int j=0;j<n;j++){
                if(m==arr[j]){
                    if(m==arr[j+1]){
                        j++;
                    }    
                    count++;
                }
                hash[m]=count;
            }    
        }
        cout<<hash[1]<<endl;
        cout<<hash[2]<<endl;
        int max=hash[0];
        int k;
        for(int i=0;i<10000;i++){
            if(hash[i]>max){
                max=hash[i];
                k=i;
            }
        }
        cout<<k<<endl;
    }
}        