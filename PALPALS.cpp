#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    string str;
    for(int x=1;x<=t;x++){  
        cin>>str;
        int arr[26]={0};
        for(int i=0;i<str.length();i++){
            arr[str[i]-'a']++;
        }
        int c=0,p=0;
        for( int j=0;j<26;j++){
            if(arr[j]==1){
                p++;
            }
            else if((arr[j]%2==0)&&(arr[j]>0)){
                int r=(arr[j])/2;
                c=c+r;
            }
            else if(arr[j]>0){
                int k=(arr[j]-3)/2;
                c=c+k;
            }
        }
        if(c>=p){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}        