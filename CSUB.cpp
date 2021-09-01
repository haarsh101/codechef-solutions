#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    long long int n;
    string str;
    for(int x=1;x<=t;x++){  
        cin>>n;
        cin>>str;
        int c=0;
        for(int i=0;i<n;i++){
            if(str[i]=='1'){
                c++;
            }
        }
        long long int s=(c*(c+1))/2;
        cout<<s<<endl;
    }
}               