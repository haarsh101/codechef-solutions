#include<bits/stdc++.h>
using namespace std;

int main(){
    int R;
    cin>>R;
    int L;
    string str;
    for(int x=1;x<=R;x++){
        cin>>L>>str;
        bool islastcharT=true, isvalid=true;
        for(int i=0;i<L;i++){
            
            if(str[i]=='.'){
                continue;
            }
            else if((str[i]=='H') && (islastcharT==false)){
                isvalid = false;
                break;
            }
            else if((str[i]=='H') && (islastcharT==true)){
                islastcharT = false;
            }
            else if((str[i]=='T') && (islastcharT==true)){
                isvalid = false;
                break;
            }
            else if((str[i]=='T') && (islastcharT==false)){
                islastcharT = true;
            }
        }

        if(islastcharT==false){
            cout<<"Invalid"<<endl;
        }
        else if(isvalid==false){
            cout<<"Invalid"<<endl;
        }
        else if(isvalid==true){
            cout<<"Valid"<<endl;
        }
    }
}        