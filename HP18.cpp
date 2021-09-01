#include <iostream>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--) {
        long long  int n,a,b,cnt1=0,cnt2=0,cnt3=0;
        cin>>n>>a>>b;
        while(n--) {
            long long int x;
            cin>>x;
            if(x%a==0) {
                cnt1++;
            }
            if(x%b==0) {
                cnt2++;
            }
            if(x%a==0 and x%b==0) {
                cnt3++;
            }
        }
        if(cnt3) {
            cnt1++;
        }
        if(cnt1>cnt2) {
            cout<<"BOB"<<endl;
        } else {
            cout<<"ALICE"<<endl;
        }
    }
   return 0;
}
