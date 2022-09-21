#include<bits/stdc++.h>
using namespace std;
int x,y,z,n,F[1005];
int qhd(){
	F[1]=x;
	for(int i=2;i<=n;i++){
		if(i%2==0){
			F[i]=min(F[i-1]+x,F[i/2]+z);
		}
		else {
			F[i]=min(F[i-1]+x,F[(i+1)/2]+z+y);
		}
	}
	return F[n];
}
int main(){
    
	int t;cin >> t;
	while(t--){
		cin >>n;		
		cin >> x >> y >> z;
		cout << qhd()<<endl;
	}
	
	return 0;
}