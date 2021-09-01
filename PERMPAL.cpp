#include <iostream>
#include <algorithm>     //header file we need to include when we use string sort function
using namespace std;

int main(){
    int t;
    cin>>t;
    string str;
    for(int x=1;x<=t;x++){
        cin>>str;
        int arr[26]={0};
        for(int i=0;i<str.length();i++){
            arr[str[i]-'a']++;
        }
        int c=0;
        int k=0;
        for(int j=0;j<26;j++){
            if(arr[j]==1){
                c++;
                k=j;
            }
        }
        if(c>1){
            cout<<-1<<endl;
        }
        else if(c==1){
            int l=str.length();
            char ch=k+'a';
            int find=0;
            sort(str.begin(),str.end());
            cout<<str<<endl;
            for(int i=0;i<l;i++){
               if(str[i]==ch){
                   find=i;
                }
            }
            for(int j=1;j<=l;j++){  
                if((j%2)!=0){
                   cout<<j<<" ";
                }
            } 
            for(int j=l;j>=1;j--){
               if(j%2==0){
                  cout<<j<<" ";
                }
            }
        }
    }    
}    