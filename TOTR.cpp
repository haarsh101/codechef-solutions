#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    string s;
    cin>>t>>s;
    string str;
    for(int p=1;p<=t;p++){
        cin>>str;
        for(int i=0;i<str.length();i++){
            int ascii=str[i];
            if(ascii>=65&&ascii<=90){
                int k=ascii-65;
                int h=s[k];
                char ch=h-32;
                str[i]=ch;
            }
            else if(ascii>=97&&ascii<=122){
                int k=ascii-97;
                char ch=s[k];
                str[i]=ch;
            }
            else if(str[i]=='_'){
                str[i]=' ';
            }
        }
        for(int j=0;j<str.length();j++){
            cout<<str[j];
        }
        cout<<endl;
    }
}    