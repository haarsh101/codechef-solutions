#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    cin>>n;
    long long int arr[n];
    for(long long int x=0;x<n;x++){
        cin>>arr[x];
    }
    long long int max=0;
    for(long long int i=0;i<n;i++){
        long long int prod=1;
       for(int j=i;j<n;j++){
           prod*=arr[j];  
           if(prod==0){
               i=j;
               break;
           }
           else if(prod!=0&&((j-i)+1)>max){
               max=(j-i)+1;
           } 
        }
    }
    cout<<max<<endl;
}       