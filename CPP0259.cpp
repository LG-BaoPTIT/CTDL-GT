#include<iostream>

using namespace std;
void nhap(int arr[100][100],int a,int b){
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin >> arr[i][j];
        }
    }
}
int main(){
    int m,n,p;
    cin >> m >> n >> p;
    int a[100][100];
    int b[100][100];
    int c[100][100];
    nhap(a,m,n);
    nhap(b,n,p);
    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
            for(int l=0;l<n;l++){
                c[i][j]+=a[i][l]*b[l][j];
            }
            
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
            cout<< c[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}