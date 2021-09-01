#include<bits/stdc++.h> 
using namespace std;

int main(){
    int t,k;
    cin>>t;
    for(int x=1;x<=t;x++){
        cin>>k;
        //to convert int to string
        stringstream ss;  
        ss<<k;  
        string S;  
        ss>>S;
        int n=S.length();
        for(int i=0;i<n;i++){
            char h=S[n-i-1];
            S[n-i-1]=S[i];
            if(S[n-i-1]<h){
                S[n-i-2]=S[n-i-2]+1;
            }
            else if(S[n-i-1]=h){
                S[n-i-2]=S[n-i-2]+1;
            }
        }
        S[int(n/2)-1]=S[int(n/2)];
        cout<<S<<endl;
    }
}




// high complexity soln.
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t,k;
//     cin>>t;
//     for(int x=1;x<=t;x++){
//         cin>>k;
//         for(int i=(k+1);;i++){
//             int h=i;
//             int add=0,re;
//             while(h>0){
//             re=h%10;
//             add=(add*10)+re;
//             h=h/10;
//             }
//              if(add==i){
//                 cout<<i<<endl;
//                 break;
//             }
//         }
//     }   
// }    