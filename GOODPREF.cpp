#include <iostream>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    string str;
    int count=0;
    for(int x=1;x<=t;x++){  
        cin>>str>>n;
        int a=0,b=0;
        for(int i=0;i<str.length();i++){
            if(str[i]=='a'){
               a++;
            }
            else if(str[i]=='b'){
               b++;
            }
        }
        count=a-b;
        cout<<count<<endl;
    }
}        


//very high time complexity soln. will not run
// #include <iostream>
// using namespace std;

// int main(){
//     int t,n;
//     cin>>t;
//     string str;
//     for(int x=1;x<=t;x++){  
//         cin>>str>>n;
//         string S="";
//         for(int i=1;i<=n;i++){
//             S+=str;
//         }
//         int l=S.length();
//         int c=0;
//         for(int i=0;i<l;i++){
//             int a=0,b=0;
//             for(int j=0;j<=i;j++){
//                 if(S[j]=='a'){
//                     a++;
//                 }
//                 else if(S[j]=='b'){
//                     b++;
//                 }
//             }
//             if(a>b){
//                c++;
//             }
//         }
//         cout<<c<<endl;
//     }    
// }    