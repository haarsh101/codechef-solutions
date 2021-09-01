#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int x=1;x<=t;x++){
        int n,m,q;
        cin>>n>>m>>q;
        char ch;
        int i,cap=0,c=0;
        long long int hash[n+10]={0};
        for(int j=1;j<=q;j++){
            cin>>ch>>i;
            if(hash[i]==0&&ch=='-'){
                c=1;
            }
            hash[i]=1;
            if(ch=='+'){
                cap++;
            }
            else if(ch=='-'){
                cap--;
            }
            if(cap>m){ 
                c=1;
            }
        }
        if(c!=1){
            cout<<"Consistent"<<endl;
        }
        else if(c==1){
            cout<<"Inconsistent"<<endl;
        }
    }
}        