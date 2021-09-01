#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int n;
    for(int x=1;x<=t;x++){
        cin>>n;
        int arr[n];
        for(int p=0;p<n;p++){
            cin>>arr[p];
        }
        int mid=n/2;
        int flag=0;
        for(int i=0;i<mid;i++){
            if(arr[0]==1&&arr[n-1]==1&&arr[mid]==7&&(arr[i+1]-arr[i]==0||arr[i+1]-arr[i]==1)&&(arr[i]==arr[n-1-i])){
                flag=1;
            }
            else{
                flag=-1;
                break;
            }
        }
        if(flag==1){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
}    