#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    long long int n;
    for(int x=1;x<=t;x++){
        cin>>n;
        int p,q,d;
        double sum=0;
        for(long long int i=1;i<=n;i++){
            double hike=0,dis=0;
            cin>>p>>q>>d;
            hike=p+(d*0.01*p);
            dis=hike-(d*0.01*hike);
            sum+=q*(p-dis);
        }
        cout<<fixed<<setprecision(9)<<sum<<endl;
    }
}    