#include<bits/stdc++.h>
using namespace std;

int main(){
	string S,str;
	int n,p,kt;
	cin>>S;
	cin>>n;
	string ans[n];
	for(int i=0;i<n;i++){ 
    	cin>>str;
		kt=1;
		for(int j=0;j<str.length();j++){
			p=S.find(str[j]);
			if (p == string::npos){
                kt=0;
                break;
            }    
		}
		if(kt==0){
          ans[i]="No";
        } 
		else ans[i]="Yes";
	}
	for(int i=0;i<n;i++){
        cout<<ans[i]<<endl;
    }    
}