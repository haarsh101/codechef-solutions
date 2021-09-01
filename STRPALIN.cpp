// better time complexity soln. O(t*1000)
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    string str1,str2;
    for(int x=1;x<=t;x++){
        cin>>str1;
        cin>>str2;
        int arr[26]={0};
        for(int i=0;i<str1.length();i++){
            arr[str1[i]-'a']=1;
        }
        int m=0;
        for(int i=0;i<str2.length();i++){
            if(arr[str2[i]-'a']==1){
               cout<<"Yes"<<endl;
               m=1;
               break;
            }
        }
        if(m==0){
           cout<<"No"<<endl;
        }
    }      
}


// high time complexity soln. O(t*1000000)
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     string str1,str2;
//     for(int x=1;x<=t;x++){
//         cin>>str1;
//         cin>>str2;
//         bool flag=false;
//         for(int i=0;i<str1.length();i++){
//             for(int j=0;j<str2.length();j++){
//                 if(str1[i]==str2[j]){
//                     flag=true;
//                     break;
//                 }
//             }
//             if(flag)
//             break;
//         }
//         if(flag)
//         cout<<"Yes"<<endl;
//         else
//         cout<<"No"<<endl;
//     }    
// }    