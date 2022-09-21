#include<bits/stdc++.h>
using namespace std;
int MAX=2000;
int n,m;int A[222][222],D[222][222],S[222][222];
void floyd(){

 int i, j, k, found;

 for (i = 1; i <= n; i++){

  for (j = 1; j <= n; j++){

   D[i][j] = A[i][j];

   if (D[i][j] == MAX) S[i][j] = 0;

   else S[i][j] = j;

  }

 }
 for (k = 1; k <= n; k++){

  for (i = 1; i <= n; i++){

   for (j = 1; j <= n; j++){

    if ( D[i][j] > (D[i][k] + D[k][j])){

    

     D[i][j] = D[i][k] + D[k][j];

     S[i][j] = S[i][k];

     
    }

   }

  }

 }

}

int main(){
	cin>>n>>m;
	memset(A,0,sizeof(A));
	
	for(int i=0;i<m;i++){
		int a,b,c;
		cin>>a>>b>>c;
		A[a][b]=c;
		A[b][a]=c;
	}
	for (int i = 1; i <= n; i++){

  for (int j = 1; j <= n; j++){

   

   if (i != j && A[i][j] == 0)

    A[i][j] = MAX;

  }

 }

	floyd();
	int t;cin>>t;
	while(t--){
		int i,o;cin>>i>>o;
		cout<<D[i][o]<<endl;
	}
	
	return 0;
}