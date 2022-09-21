#include<bits/stdc++.h>

using namespace std;
void nhap(int a[],int n){
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
}
int main(){
    int t; cin >> t;
while(t--){
    int n,a[1005],g=0,h=1; cin >> n;
    nhap(a,n);
    int x=a[0]+a[1];
    if(x<0) x=-x;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int y=  a[i]+a[j];
            if(y<0) y=-y;
                if( y < x){
                    x=y;
                    g=i;h=j;
                }
        }
    }
    cout << a[g]+a[h] <<endl;
}
    return 0;
}
