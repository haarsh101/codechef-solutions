#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    string s1;
    string s2;
    for(int x=1;x<=t;x++){
        cin>>s1;
        cin>>s2;
        int a=0,b=0,c=0;
        int max,min;
        for(int i=0;i<s1.length();i++){
            if(s1[i]=='?'){
                a++;
            }
            if(s2[i]=='?'){
                b++;
            }
            else if(s1[i]!=s2[i]){
                c++;
            }
        }
        if(b>a){
            max=c+b;
        }
        else if(a>b){
            max=c+a;
        }
        else if(a==b){
            max=c+a+b;
        }
        min=c;
        cout<<min<<" "<<max<<endl;
    }    
}    