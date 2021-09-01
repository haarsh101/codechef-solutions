#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    string str;
    for(int x=1;x<=t;x++){
        cin>>str;    
        int arr[100]={0}; 
	    for(int j=0;j<str.length();j++){
	        arr[str[j]]++;
	    }
	    int sum=0;
	    for(int i=0;i<100;i++){
	        if(arr[i]!=0){
	            sum+=arr[i]%2+arr[i]/2;
	        }
	    }
	    cout<<sum<<endl;
	}
}