#include<bits/stdc++.h>
using namespace std;
int b[10];
void in(){
	for(int i=1;i<=8;i++){
		cout << b[i];
		if(i==2 || i==4) cout << "/";
	}
	cout << endl;
}
int check(){
	if(b[1]==0 && b[2]==0) return 0;
	else if(b[3]==0&&b[4]==0) return 0;
	else if(b[3]==2) return 0;
	else if(b[5]==0) return 0;
	return 1;
}
void quaylui(int i){
	int j;
	for(j=0;j<=1;j++){
		if(j==1) b[i]=2;
		else b[i]=0;
		if(i==8){
			if(check()) in();
		}
		else quaylui(i+1);
	}
}
int main(){
	quaylui(1);
}
