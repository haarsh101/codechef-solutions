#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int t;
    cin>>t;
    long long int x,y;
    for(int m=1;m<=t;m++){  
        cin>>x>>y;
        cout<<x<<y<<endl;
        long long int p=x+y;
        long long int i=1;
        while(p!=0){
            long long int pr=p+i;
            long long int c=0;
            for(long long int j=2;j<=sqrt(pr);j++){
                if(pr%j==0){
                    c++;
                }
            }
            if(c==0){
                cout<<i<<endl;
                break;
            }
            i++;
        }
    } 
}        