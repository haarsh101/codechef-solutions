#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int x=1;x<=t;x++){
        int sa,sb,sc;
        cin>>sa>>sb>>sc;
        if(sc<sb&&sc<sa){
            cout<<"Alice"<<endl;
        }
        else if(sb<sc&&sb<sa){
            cout<<"Bob"<<endl;
        }
        else if(sa<sc&&sa<sb){
            cout<<"Draw"<<endl;
        }
    }    
}