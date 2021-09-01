#include <iostream>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    string str;
    for(int x=1;x<=t;x++){
        cin>>n;
        cin>>str;
        for(int i=0;i<n;i++){
            if(n%2==0){
                char temp=str[i];
                str[i]=str[i+1];
                str[i+1]=temp;
                i=i+1;
            }
            else if((n%2)!=0){
                char last=str[n-1];
                char temp=str[i];
                str[i]=str[i+1];
                str[i+1]=temp;
                i=i+1;
                str[n-1]=last;
            }
        }
        string res="";
        for(int j=0;j<n;j++){
            res+='z'-str[j]+'a';
        }
        cout<<res<<endl;
    }    
}        