#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    long long int num;
    for(int x=1;x<=t;x++){
        cin>>num;
        string s=to_string(num);
        int n=s.size();
        string res;
        if(n==1){
            cout<<s<<endl;
            continue;
        }
        else if(n==2){
            cout<<(int(s[0]-'0')^int(s[1]-'0'))<<endl;
            continue;
        }
        for(int i=0;i<n;i++){
            int x=(s[i]-'0');
            int y=(s[(i+1)%n]-'0');
            int xr=x^y;
            res+=to_string(xr);
        }
        cout<<res;
        cout<<endl;
    }
}