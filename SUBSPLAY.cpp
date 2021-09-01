#include <iostream>
using namespace std;

int main(){
    int t,n;
    int min=99999;
    cin>>t;
    string S;
    for(int x=1;x<=t;x++){  
        cin>>n;
        cin>>S;
        int a[26]={0};
        for(int i=0;i<26;i++){
            a[i]=-1;
        }
        for(int j=0;j<n;j++){
            if((a[S[j]-'a'])==-1){
                a[S[j]-'a']=j;
            }
            else if((a[S[j]-'a'])!=-1){
                int val=j-a[S[j]-'a'];
                a[S[j]-'a']=j;
                if(min>val){
                   min=val;
                }
            }
        }
        if(min==99999){
            cout<<0<<endl;
        }
        else{
            cout<<n-1-(min-1)<<endl;
        }
    }  
}      