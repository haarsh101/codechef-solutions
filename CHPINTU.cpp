#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int N,M;
    for(int x=1;x<=t;x++){  
        cin>>N>>M;
        int arr1[N],arr2[N];
        for(int p=0;p<N;p++){
            cin>>arr1[p];
        }
        for(int p=0;p<N;p++){
            cin>>arr2[p];
        }
        int arr[200]={0};
        int res=0;
        int min=3000;
        for(int i=0;i<N;i++){ 
            if(arr[arr1[i]]==0){    
                res=arr2[i];
                for(int j=i+1;j<N;j++){
                    if(arr1[j]==arr1[i]){
                        arr[arr1[i]]=1;
                        res=res+arr2[j];
                    }
                }
                if(res<min){
                    min=res;
                }
                res=0;
            }    
        }
        cout<<min<<endl;
    }
}        