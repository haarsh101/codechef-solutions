#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int n,k;
    for(int x=1;x<=t;x++){
        cin>>n>>k;
        int arr[n],c=1,flag=0,sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i]; 
            if(arr[i]>k){
               flag=1;
            }   
            else if(sum+arr[i]>k){
               sum=arr[i];
               c++;
            }
            else{
               sum+=arr[i];
            }   
        }
        if(flag==1){
           cout<<-1<<endl;
        }    
        else{
           cout<<c<<endl;
        }   
    }
}    