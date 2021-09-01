#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    long long int A,B,N;
    for(int x=1;x<=t;x++){  
        cin>>A>>B>>N;
        int c=0;
        for(long long int i=1;i<=N;i++){
            for(long long int j=1;j<=N;j++){
                long long int p=pow(A,i)-pow(B,i);
                long long int q=pow(A,j)-pow(B,j);
                while(q!=0){
                    long long int rem=p%q;
                    p=q;
                    q=rem;
                }
                c=c+p;
            }
        }
        cout<<(c%(int(pow(10,9)+7)))<<endl;
    }
}        