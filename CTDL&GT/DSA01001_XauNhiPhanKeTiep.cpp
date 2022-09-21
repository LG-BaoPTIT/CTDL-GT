#include<bits/stdc++.h>
using namespace std;
void sinh(string s){
	int i= s.length()-1;
	while(s[i]=='1'){
		s[i] = '0';
		i--;
	}
	if(i>=0) s[i] =  '1';
	cout << s << endl;;
}
main(){
	
	int t;
	string s;
	cin >> t;
	while(t--){
		cin >> s;
		sinh(s);
	}
}