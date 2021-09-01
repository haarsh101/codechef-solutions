#include <bits/stdc++.h>
using namespace std;


string add(string a,string b){
    int a1=a.length();
    int b1=b.length();
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    if(a1>b1){
        string temp=a;
        a=b;
        b=temp;
        int temp1=a1;
        a1=b1;
        b1=temp1;
    }
    string res="";
    if(a1==b1){
        int leftover=0;
        for(int i=0;i<a1;i++){
            int sum=int(a[i]-'0')+int(b[i]-'0')+leftover;
            int rem=sum%10;
            res+=(rem+'0');
            leftover=sum/10;
        }
        if(leftover!=0){
            res+=(leftover+'0');
        }
        reverse(res.begin(),res.end());
        return res;
    }
    else if(a1<b1){
        int leftover=0;
        for(int i=0;i<a1;i++){
            int sum=int(a[i]-'0')+int(b[i]-'0')+leftover;
            int rem=sum%10;
            res+=(rem+'0');
            leftover=sum/10;
        }
        int leftover1=0;
        for(int j=a1;j<b1;j++){
            int sum1=int(b[j]-'0')+leftover+leftover1;
            int rem1=sum1%10;
            res+=(rem1+'0');
            leftover1=sum1/10;
            leftover=0;
        }
        if(leftover1!=0){
            res+=(leftover1+'0');
        }
        reverse(res.begin(),res.end());
        return res;
    }
}


int main(){
    unordered_map<string, int> hash;
    hash["0"]=1;
    hash["1"]=1;
    string prev1="0";                                      
    string prev2="1";                                              
    for(int m=2;m<10000;m++){                 
        string ans=add(prev1,prev2);
        prev2=ans;
        prev1=prev2;
        hash[ans]=1;
    }
    cout<<hash["5"]<<endl;

    int t;
    cin>>t;
    for(int x=1;x<=t;x++){
        string a;
        cin>>a;
        // if(hash[a]==1){
        //     cout<<"YES"<<endl;
        // }
        // else if(hash[a]==0){
        //     cout<<"NO"<<endl;
        // }
    }
}


// int main(){
//     int t;
//     cin>>t;
//     for(int x=1;x<=t;x++){
//         string a;
//         cin>>a;
//         string hash[1001];
//         hash[1]=0;
//         hash[2]=1;
//         if(a==hash[1]||a==hash[2]){
//             cout<<"YES"<<endl;
//             continue;
//         }
//         int l=0;
//         for(int i=3;i<1001;i++){
//              hash[i]=hash[i-1]+hash[i-2];
//             if(a==hash[i]){
//                 cout<<"YES"<<endl;
//                 l=1;
//                 break;
//             }
//         }
//         if(l!=1){
//             cout<<"NO"<<endl;
//         }    
//     }
// }        