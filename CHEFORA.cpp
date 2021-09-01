#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll M=1e9+7;
vector<int> chefora;
vector<ll> v;
void compute(){
    int c=1;
    for(int i=1;i<10000010;i++){
        int store=i;
        int count=0,sum=0;
        while(store!=0){
            int rem=store%10;
            count++;
            sum=(sum*10)+rem;
            store=store/10;
        }
        if((count%2)!=0&&sum==i){    
            chefora.push_back(i);
            v.push_back(v[c-1]+i);
            c++;
        }
    }
}

ll binExpRecur(ll m,ll n){
    if(n==0){
        return 1;
    }
    ll res=binExpRecur(m,n/2);
    if((n%2)!=0){     
        return (m*((res*res)%M))%M;
    }
    else{
        return (res*res)%M;
    } 
}

int main(){
    chefora.push_back(0);
    v.push_back(0);
    compute();
    
    int q;
    cin>>q;
    for(int p=1;p<=q;p++){
        int l,r;
        cin>>l>>r;
        int a=chefora[l];
        ll max=v[r]-v[l];
        cout<<binExpRecur(a,max)<<endl;
    }
}
