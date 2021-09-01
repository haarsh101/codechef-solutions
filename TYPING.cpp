#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int n;
    for(int x=1;x<=t;x++){
        cin>>n;
        string str;
        int sum=0;
        string arr[n];
        for(int p=0;p<n;p++){
            cin>>str;
            arr[p]=str;
        }
        int a[n]={0};
        int ans=0;
        for(int j=0;j<n;j++){
            for(int d=0;d<j;d++){
                if((arr[j].compare(arr[d]))==0){
                    ans=a[d]/2;
                    a[j]=ans;
                }
            }
            
            ans=2;
            for(int i=1;i<arr[j].size();i++){
                if((str[i-1]=='d'||str[i-1]=='f')&&(str[i]=='d'||str[i]=='f')){
                    ans+=4;
                }
                else if((str[i-1]=='d'||str[i-1]=='f')&&(str[i]=='j'||str[i]=='k')){
                    ans+=2;
                }
                else if((str[i-1]=='j'||str[i-1]=='k')&&(str[i]=='j'||str[i]=='k')){
                    ans+=4;
                }
                else if((str[i-1]=='j'||str[i-1]=='k')&&(str[i]=='d'||str[i]=='f')){
                    ans+=2;
                }
            }
            a[j]=ans;
        } 
        for(int v=0;v<n;v++){
            cout<<arr[v]<<" ";
            cout<<a[v]<<" ";
            sum+=a[v];
        }   
        cout<<sum<<endl; 
    }
}        