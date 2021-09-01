#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    string str;
    for(int x=1;x<=t;x++){
        cin>>str;
        int a=0,b=0;
        for(int i=0;i<str.length();i++){
            if(str[i]=='0'){
                a++;
            }
            else if (str[i]=='1'){
                b++;
            }
        }
        if(a==1||b==1){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
}        
