#include <bits/stdc++.h>
using namespace std;


int gcd(int a,int b){
    while(b!=0){
        int rem=a%b;
        a=b;
        b=rem;
    }
    return a;
}


int main(){
    int t;
    cin>>t;
    for(int x=1;x<=t;x++){
        int n;
        cin>>n;
        long long int sum=0;
        long long int arr[n+1];
        for(int j=1;j<=n;j++){
            cin>>arr[j];
            sum+=arr[j];
        }
        if(n==1){
            cout<<1<<endl;
            continue;
        }
        long long int front[n+1];
        long long int back[n+1];
        front[0]=back[n+1]=0;
        for(int k=1;k<=n;k++){
            front[k]=gcd(front[k-1],arr[k]);
        }    
        for(int h=n;h>=1;h--){
            back[h]=gcd(back[h+1],arr[h]);
        }
        long long int ans=sum/front[n];
        for(int i=1;i<=n;i++){
            long long int sub=(sum-arr[i])/(gcd(front[i-1],back[i+1]));
            long long int tot=sub+1;
            ans=min(ans,tot);
        }
        cout<<ans<<endl;
    }
}        