#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int x=1;x<=t;x++){
        int n;
        cin>>n;
        long long int a[n];
        long long int b[n-1];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int j=0;j<n-1;j++){
            cin>>b[j];
        }
        sort(a,a+n);
        sort(b,b+(n-1));
        long long int p=b[0]-a[0];
        long long int q=b[0]-a[1];
        if((n-1)==1){
            if(p<0){
                cout<<q<<endl;
                continue;
            }
            if(q<0){
                cout<<p<<endl;
                continue;
            }
            if(q<p){
                cout<<q<<endl;
                continue;
            }
            if(p<q){
                cout<<p<<endl;
                continue;
            }
        }
        long long int r=b[1]-a[1];
        long long int s=b[1]-a[2];
        if(p<0){
            cout<<q<<endl;
            continue;
        }
        if(q<0){
            cout<<p<<endl;
            continue;
        }
        if(p==r||p==s){
            cout<<p<<endl;
            continue;
        }
        if(q==s){
            cout<<q<<endl;
            continue;
        }
    }
}    