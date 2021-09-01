#include <iostream>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    string str;
    for(int x=1;x<=t;x++){
        cin>>n;
        int h=n;
        int a[26]={0};
        for(int i=0;i<n;i++){
            cin>>str;
            for(int j=0;j<str.length();j++){
                if(a[str[j]-'a']==i){
                  a[str[j]-'a']++;
                }
            }
            
        }
        int c=0;
        for(int i=0;i<26;i++){
           if(a[i]==h){
             c++;
           }
        }
        cout<<c<<endl;
    }
}    