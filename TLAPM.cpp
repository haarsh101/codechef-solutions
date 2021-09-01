#include <bits/stdc++.h>
using namespace std;

int arr[1001][1001];
void compute(){
    for(int i=1;i<=1000;i++){
        arr[i][1]=i*(i+1)/2;
        for(int j=2;j<=1000;j++){
            arr[i][j]=arr[i][j-1]+(j-1)+(i-1);
        }
    }
}

int main(){
    compute();
    int t;
    cin>>t;
    for(int p=1;p<=t;p++){
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        long long sum=0;
        for(int k=x1;k<=x2;k++){
            sum+=arr[k][y1];
        }
        for(int h=y1+1;h<=y2;h++){
            sum+=arr[x2][h];
        }
        cout<<sum<<endl;
    }
}
