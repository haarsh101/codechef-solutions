#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    string str;
    for(int p=1;p<=t;p++){
        cin>>str;
        int arr[26]={0};
        for(int i=0;i<str.length();i++){
            arr[str[i]-'a']++;
        }
        int max=0,c=0;
        for(int j=0;j<26;j++){
            c+=arr[j];
            if(arr[j]>max){
                max=arr[j];
            }
        }
        if((c-max)==max){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        } 
    }
}    