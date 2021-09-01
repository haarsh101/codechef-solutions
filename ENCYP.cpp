#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    string S;
    for(int x=1;x<=t;x++){
        cin>>S;
        int ascii,val=0;
        int a[5]={98,57,31,45,46};
        int arr[500]={0};
        for(int i=0;i<S.length();i++){
            ascii=S[i];               // OR USE INSTEAD OF THESE TWO LINES val=(S[i]-'A'); 
            val=ascii-65;
            arr[i]=val;
        }
        string res;
        char asciinew;
        for(int j=0;j<S.length();j++){
            arr[j]=(arr[j]+a[j])%26;
            int y=arr[j]+65;          // OR USE INSTEAD OF THESE TWO LINE asciinew=(arr[j]+'A');
            asciinew=y;
            res+=asciinew;
        }
        cout<<res<<endl;
    }
}        