#include<bits/stdc++.h>
using namespace std;

int main(){
    string S;
    cin>>S;
    char arr[]={'a','e','i','o','u'};
    int V,C;
    for(int i=0;i<S.length;i++){
        for(int j=0;j<5;j++){
            if(S[i]==arr[j]){
                V++;
            }
            else C++;
        }
        
    }