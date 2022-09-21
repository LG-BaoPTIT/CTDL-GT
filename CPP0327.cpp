#include <iostream>

using namespace std;
int main() {
	int n,m,S=0,a[100][100];
	cin >> n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++) cin >> a[i][j];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++) S=S+a[i][j];
	}
	m=S/2;
	cout << n << " " << m << endl;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(j>i && a[i][j]==1) cout << i << " " << j << endl;
		}
	}
	return 0;
}