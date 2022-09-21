#include<iostream>
using namespace std;
void nhap(int A[50][50],int n){
    for(int i=0;i<n;i++){
        cin >> A[0][i];
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >>n;
        int A[50][50];
        nhap(A,n);
        
        int g=1;
        while(g<n){
            for(int i=0;i<n-g;i++){
                A[g][i]=A[g-1][i]+A[g-1][i+1];
            }
            g++;           
        }
        g--;
        while(g>=1){
            cout<<"[";
            for(int j=0;j<n-g;j++){
                cout<<A[g][j];
                if(j!=n-g-1) cout << " ";
            }
            cout <<"] ";
            g--;
        }
        cout<<"[";
            for(int k=0;k<n;k++){
                cout<<A[0][k];
                    if(k!=n-1) cout << " ";
            }
            cout <<"]";
           
            cout<<endl;
    }
    return 0;
}