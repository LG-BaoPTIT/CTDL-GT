#include<iostream>
using namespace std;
int ok,a[100],n;
void sinh(){
    int i=1;
    while(i<=n&&a[i]==0){
        a[i]=1;
       i++;
    }
    if(i==n){
        ok=0;
    }
    else a[i]=0;
}
int kt(int a[],int n){
	for(int i=1;i<n;i++){
		if(a[i]==0&&a[i+1]==0) return 0;
	}
	if(a[1]==1) return 0;
	if(a[n]==0) return 0;
	return 1;
}
int main(){
	int t; cin >> t;
	while(t--){
	cin >> n;
    ok=1; 
    fill_n(a,100,0);
    while(ok){
        if(kt(a,n)){
				for(int i=1;i<=n;i++){
					if(a[i]==1) cout <<"A";
					else cout << "H";
				}
				cout << endl;
			}
        
        sinh();
    }
	}
    
    return 0;
}