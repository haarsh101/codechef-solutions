#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    long long int Y;
    int N,A,B,C,D,P,Q;
    for(int o=1;o<=t;o++){
        cin>>N>>A>>B>>C>>D>>P>>Q>>Y;
        int arr[N];
        for(int x=0;x<N;x++){
            cin>>arr[x];
        }
        A=arr[A-1];
        B=arr[B-1];
        C=arr[C-1];
        D=arr[D-1];
        int time=0;
        if(A>B&&C>D){
            int temp1=B;
            B=A;
            A=temp1;
            int temp2=D;
            D=C;
            C=temp2;
        }
        else if(A>B&&D>C){
            time=(A-B)*P;
            cout<<time<<endl;
            continue;
        }
        else if(B>A&&C>D){
            time=(B-A)*P;
            cout<<time<<endl;
            continue;
        }
        for(int i=A;i<B;i++){
            if(time<=Y&&i==C&&B==D){
                if(((Y-time)+(D-C)*Q)<=((B-C)*P)){
                    time+=((Y-time)+(D-C)*Q);
                    break;
                }    
            }
            else if(time<=Y&&i==C&&B>D){
                if(((Y-time)+(D-C)*Q+(B-D)*P)<=((B-C)*P)){
                    time+=((Y-time)+(D-C)*Q+(B-D)*P);
                    break;
                }    
            }
            else if(time<=Y&&i==C&&B<D){
                if(((Y-time)+(D-C)*Q+(D-B)*P)<=((B-C)*P)){
                    time+=((Y-time)+(D-C)*Q+(D-B)*P);
                    break;
                }
            }    
            time+=P;
        }
        cout<<time<<endl;
    }    
}    