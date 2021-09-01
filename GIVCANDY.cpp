#include <iostream>
#include <cstdlib>         //header file we need to include when we use absolute function
using namespace std;

int main(){
    int t;
    cin>>t;
    long long int A,B,C,D;
    for(int x=1;x<=t;x++){  
        cin>>A>>B>>C>>D;
        while(D!=0){
            long long int rem=C%D;
            C=D;
            D=rem;
        }
        long long int g=C;
        long long int p=abs(A-B);
        cout<<min((p%g),(g-(p%g)))<<endl;
    }    
}    