#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int n,k,l;
    string a[5000];
    for(int x=1;x<=t;x++){
        cin>>n>>k;
        int m=0;
        string arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<k;i++){
            cin>>l;
            string S[l];
            for(int j=0;j<l;j++){
                cin>>S[j];
                a[m]=S[j];
                m++;
            }
        }
        for(int k=0;k<n;k++){
            int count=0;
            for(int p=0;p<m;p++){
                if(arr[k].compare(a[p])==0){
                    count++;
                    break;
                }
            }
            if(count>0){
                cout<<"YES ";
            }
            else cout<<"NO ";
        }
        cout<<endl;
    }
}       


// different approach
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     int n,k,l;
//     string str[n];
//     for(int x=1;x<=t;x++){
//         cin>>n>>k; 
// 	    int arr[n]={0};
// 	    for(int i=0;i<n;i++){
// 	        cin>>str[i];
//         }    
// 	    for(int i=0;i<k;i++){
// 	        cin>>l;
// 	        string S[l];
// 	        for(int j=0;j<l;j++){
// 	            cin>>S[j];
// 	            for(int p=0;p<n;p++){
// 	                if(str[p].compare(S[j])==0){
// 	                    arr[p]++;
// 	                }
// 	            }    
// 	        }
//      }         
// 	    for(int i=0;i<n;i++){
// 	       if(arr[i]>0)
// 	       cout<<"YES ";
// 	       else
// 	       cout<<"NO ";
//      }      
// 	    cout<<endl;
//     }   
// }