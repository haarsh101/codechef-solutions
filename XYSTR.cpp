#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int x=1;x<=t;x++){
        string str;
        cin>>str;
        int n=str.length();
        int count=0;
        for(int i=0;i<n-1;i++){
            if(str[i]!=str[i+1]){
                count++;
                i++;
            }
        }
        cout<<count<<endl;
    }
}        