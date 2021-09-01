#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    string str;
    for(int x=1;x<=t;x++){
        cin>>str;
        string S=str;
        for(int i=0;i<str.length();i++){
            if(str.substr(i,5)=="party"){
                str[i+2]='w';
                str[i+3]='r';
                str[i+4]='i';
            }
        }
        cout<<str<<endl;
    }
}        