#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int x=1;x<=t;x++){
        long long int n,k,s;
        cin>>n>>k>>s;
        s-=(n*n);
        int i=1;
        while(i*(k-1)!=s){
            i+=2;
        }
        cout<<i<<endl;
    }
}     