#include<bits/stdc++.h>
#include<math.h>
using namespace std;
void tao(string *s,int n){
    for(int i=0;i<n;i++){
            *s=*s+'0';
        }
}

using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n,k;cin >> n >> k;
        string a;       
        tao(&a,n);      
        int x=pow(2,n);
        for(int i=0;i<x;i++){
             int g=0;   
            int y= n-1;
	        while(a[y]=='1'){
		    a[y] = '0';
		    y--;
	        }
	        if(y>=0) a[y] =  '1';
            for(int i=0;i<n;i++){
                if(a[i]=='1')g++;
            }
            if(g==k) cout<< a << endl;
        }

    }
    return 0;
}