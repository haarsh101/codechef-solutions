#include <iostream>
using namespace std;

int arr[1000000]={0};
int main(){
    int x=2,y=3,z=9;
    arr[x]=1;
    arr[y]=1;
    arr[z]=1;
    for(int j=1;j<=10000;j++){
        arr[x+(j*10)]=1;
        arr[y+(j*10)]=1;
        arr[z+(j*10)]=1;
    }
    int arr1[100005]={0};
    int count=0;
    for(int h=0;h<100005;h++){
        if(arr[h]==1){
            count++;
        }
        arr1[h]=count;
    }
    int t;
    cin>>t;
    for(int p=1;p<=t;p++){
        int l,r;
        cin>>l>>r;
        cout<<arr1[r]-arr1[l-1]<<endl;
    }
}        