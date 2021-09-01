#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    string S;
    for(int x=1;x<=t;x++){
        cin>>S;
        string ans="NO";
        int arr[26]={0};
        for(int i=0;i<S.length();i++){
            arr[S[i]-'a']++;
        }
	    for(int i=0;i<26;i++){
	        if(arr[i]==(S.length()-arr[i])){
	            ans="YES";
	            break;
	        }
	    }
	    cout<<ans<<endl;    
	}
}