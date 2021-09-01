#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    string S,P;
    for(int o=1;o<=t;o++){
        cin>>S;
        cin>>P;
        string res="";
        int hash[26]={0};
        for(int i=0;i<S.length();i++){
            hash[S[i]-'a']++;
        }
        for(int j=0;j<P.length();j++){
            hash[P[j]-'a']--;
        }
        for(int k=0;k<26;k++){
            for(int h=0;h<hash[k];h++){
                res+=(k+'a');
            }
        }
        string ans="";
        int v=res.length();
        if(v!=0){
            for(int c=0;c<v;c++){
                if(res[c]>P[0]){
                    ans=res.substr(0,c)+P+res.substr(c,c-v);
                    break;
                }
                ans+=res[c];
            }
            int g=ans.length();
            if(ans[g-1]<P[0]){
                ans+=P;
            }
        } 
        else if(v==0){
            ans=P;
        }   
        cout<<ans<<endl;
    }
}        