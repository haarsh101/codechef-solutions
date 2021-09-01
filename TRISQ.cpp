#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int b;
    for(int i=1;i<=t;i++){
        cin>>b;
        int val=0;
        for(int i=b;i>=2;i-=2){
            int j=(b-i);
            val=val+(j/2);
            }
        cout<<val<<endl;
    }

}


// high time complexity soln.
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     int b;
//     for(int i=1;i<=t;i++){
//         cin>>b;
//         int tr=0;
//         for(int i=b;i>=2;i-=2){
//             for(int j=2;j<=b;j+=2){
//                 int val=0;
//                 val=(j+i)-b;
//                 if(val<=0){
//                     tr++;
//                 }
//             }
//         }
//         cout<<tr<<endl;
//     }

// }