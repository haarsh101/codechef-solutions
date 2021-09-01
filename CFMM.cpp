#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    string str;
    for(int x=1;x<=t;x++){
        cin>>n;
        int arr[6]={0};
        for(int i=0;i<n;i++){
            cin>>str;
            for(int j=0;j<str.length();j++){
                if(str[j]=='c')
                   arr[0]++;
                else if(str[j]=='o')
                   arr[1]++;
                else if(str[j]=='d')
                   arr[2]++;
                else if(str[j]=='e')
                   arr[3]++;
                else if(str[j]=='h')
                   arr[4]++;
                else if(str[j]=='f')
                   arr[5]++;              
            }
        }  
        arr[0]=arr[0]/2;
        arr[3]=arr[3]/2;
        sort(arr,arr+6);
	    cout<<arr[0]<<endl;
    }
}