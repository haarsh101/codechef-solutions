#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int t;
    cin>>t;
    long long int C,D,L;
    for(int x=1;x<=t;x++){
        cin>>C>>D>>L;
        long long int legs=(C*4)+(D*4);
        long long int k=0;
        if(C>(D*2)){
            k=C-(D*2);
            long long min=(k*4)+(D*4);
            if((L>legs)||(L<min)){
                cout<<"no"<<endl;
                continue;
            }
            else if((L%4)==0){
                cout<<"yes"<<endl;
                continue;
            }
            else if((L%4)!=0){
                cout<<"no"<<endl;
                continue;
            }
        } 
        else if(C<=(D*2)){
            if((L>legs)||(L<(D*4))){
                cout<<"no"<<endl;
                continue;
            }
            else if((L%4)==0){
                cout<<"yes"<<endl;
                continue;
            }
            else if((L%4)!=0){
                cout<<"no"<<endl;
                continue;
            }
        } 
    }
}        