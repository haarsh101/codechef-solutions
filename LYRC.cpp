#include<bits/stdc++.h>
using namespace std;

int main(){
    int w;
    cin>>w;
    string S;
    string a[1000];
    int y=0;
    for(int x=1;x<=w;x++){
        cin>>S;
        a[y]=S;
        y++;
    } 
    int n,m=0;
    cin>>n;
    string str;
    string arr[100000];
    for(int i=1;i<=n;i++){
        cin>>str;
        str='-'+str+'-';
        int pos=0;
        for(int j=1;j<str.length();j++){
            string Snew="";
            if(str[j]=='-'){
                int k=(j-pos)-1;
                Snew=str.substr((pos+1),k);
                arr[m]=Snew;
                m++;
                pos=j;
            }
        }
    }          
    for(int i=0;i<y;i++){
        int count=0;
        for(int j=0;j<m;j++){
            int found=arr[j].find(a[i]);
            if(found != string::npos){
               count++;
            }
        }
        cout<<count<<endl;
    } 
}    