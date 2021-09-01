#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,c=0;
    cin>>n;
    string str[n];
    for(int x=0;x<n;x++){
        cin>>str[x];
        if(str[x].find("ch")!= string::npos ){
            c++;
        }
        else if(str[x].find("ef")!= string::npos){
            c++;
        }
        else if(str[x].find("he")!= string::npos){
            c++;
        }
        else if(str[x].find("che")!= string::npos){
            c++;
        }
        else if(str[x].find("hef")!= string::npos){
            c++;
        }
        else if(str[x].find("chef")!= string::npos){
            c++;
        }   
    }
    cout<<c<<endl;
}        
        