#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,l,r;
    cin>>t;
    for(int x=1;x<=t;x++){
        cin>>l>>r;
        int sum=0;
        for(int i=l;i<=r;i++){
            int h=i;
            int add=0,re;
            while(h>0){
            re=h%10;
            add=(add*10)+re;
            h=h/10;
            }
            if(add==i){
                sum+=i;
            }
        }
        cout<<sum<<endl;
    }
}    
