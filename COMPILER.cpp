#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    string str;
    for(int x=1;x<=t;x++){  
        cin>>str;
        long long int t=0,val=0;
        for(long long int i=0;i<str.length();i++){
            if(str[i]=='<'){
                t++;
            }
            else{
                t--;
            }
            if(t==0){
                val=max(val,i+1);
            }
            else if(t<0){
                break;
            }
        }
        cout<<val<<endl;
    }
}        