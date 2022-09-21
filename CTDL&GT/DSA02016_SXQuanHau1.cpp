#include<iostream>
using namespace std;
int n,kq;
bool h[11],c[11],xuoi[22],nguoc[22];
void Try(int i){
    for(int j=1;j<=n;j++){
        if(!h[i]&&!c[j]&&!nguoc[i+j-1]&&!xuoi[i-j+n]){

            h[i]=c[j]=nguoc[i+j-1]=xuoi[i-j+n]=true;
            if(i==n) {kq++;}
            else {Try(i+1);}
            h[i]=c[j]=nguoc[i+j-1]=xuoi[i-j+n]=false;
        }
    }
}
int main(){
    int t;cin >> t;
    while(t--){
        cin >> n;kq=0;
       // Try(1);
       if(!h[1]) cout<<1<<endl;
       // cout<< kq<<endl;
    }
    return 0;
}