#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int x=1;x<=t;x++){
        int n,a;
        cin>>n>>a;
        int root=sqrt(n);
        cout<<root*a<<endl;
    }
}        