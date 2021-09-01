// best time complexity soln. O(t*n*logn)
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    string S;
    for(int x=1;x<=t;x++){
        cin>>S;
        sort(S.begin(),S.end(),greater<char>());
        cout<<S<<endl;
    }
}    


// high time complexity soln. O(t*n^2)
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     string str;
//     for(int x=1;x<=t;x++){
//         cin>>str;
//         for(int i=1;i<str.length();i++){
//             for(int j=0;j<str.length();j++){
//                 char ch;
//                 if(str[j+1]>str[j]){
//                     ch=str[j+1];
//                     str[j+1]=str[j];
//                     str[j]=ch;
//                 }
//             }
//         }    
//         for(int k=0;k<str.length();k++){
//             cout<<str[k];
//         }
//         cout<<endl;
//     }
// }        